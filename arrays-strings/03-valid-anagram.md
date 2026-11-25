## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
First compare the string lengths. For equal-length inputs, count each lowercase letter in the first string and subtract each letter in the second; the strings are anagrams when all 26 counts return to zero.

### Complexity

- Time: O(n)
- Space: O(1), using 26 counters

### Notes
This frequency-count solution follows the problem's lowercase-English-letter constraint. Two empty strings are anagrams. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/03-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
