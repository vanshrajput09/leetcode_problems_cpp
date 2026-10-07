# 125. Valid Palindrome

[![LeetCode](https://img.shields.io/badge/LeetCode-125.%20Valid%20Palindrome-orange)](https://leetcode.com/problems/valid-palindrome/) [![C++](https://img.shields.io/badge/Language-C++-blue)](https://isocpp.org/) [![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)](https://leetcode.com/problems/valid-palindrome/)

## Problem Description

A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a palindrome, or* `false` *otherwise*.

---

## Examples

**Example 1:**
```text
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
```

**Example 2:**
```text
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
```

**Example 3:**
```text
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
```

## Approach & Algorithm

### 1. Filtering & Normalization
* Iterate through the input string `s`.
* Filter out all non-alphanumeric characters (keep `'a'`-`'z'`, `'A'`-`'Z'`, and `'0'`-`'9'`).
* Convert uppercase ASCII characters (`'A'`-`'Z'`) to lowercase by adding `32`.
* Push the valid lowercase characters into an auxiliary `std::vector<char>`.

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | *O(N)* | We traverse the string `s` once to clean it and perform at most *N/2* comparisons using two pointers. |
| **Space Complexity** | *O(N)* | An auxiliary `std::vector<char>` is used to store filtered characters. |
