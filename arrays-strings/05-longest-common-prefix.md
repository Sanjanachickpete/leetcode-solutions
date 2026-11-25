## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Compare each character position in the first string with the same position in every other string. Stop at the first mismatch or the end of the first string. Copy the matching characters into a newly allocated, null-terminated result without changing any input string.

### Complexity

- Time: O(S), where S is the total number of characters inspected
- Space: O(p), where p is the returned prefix length, plus its null terminator

### Notes
Zero strings return an allocated empty string, one string returns a copy of that string, and no shared characters produce an empty prefix. The caller must free the allocated result in local C code. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/05-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
