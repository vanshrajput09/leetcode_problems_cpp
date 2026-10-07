### 2. `solution.cpp`

```cpp
#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    bool isPalindrome(std::string& s) {
        int i = 0;
        std::vector<char> v;
        while (s[i] != '\0') {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
                if (s[i] >= 'A' && s[i] <= 'Z') {
                    s[i] = s[i] + 32; 
                }
                v.push_back(s[i]);
            }
            i++;
        }
        
        int start = 0, end = (v.size()) - 1;
        while (start < end) {
            if (v[start] != v[end]) {
                return 0;
            }
            start++;
            end--;
        }

        return 1;
    }
};

int main() {
    Solution sol;
    std::string test = "A man, a plan, a canal: Panama";
    std::cout << (sol.isPalindrome(test) ? "True" : "False") << std::endl;
    return 0;
}
```
