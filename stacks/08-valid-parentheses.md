## Problem: Valid Parentheses (Easy)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Push every opening bracket onto a stack. For each closing bracket, check that the stack is not empty and that its top is the matching opening bracket; then remove that top item. The string is valid only when no mismatch occurs and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes
An unmatched closing bracket is rejected before reading the stack top, and unmatched opening brackets remain on the stack at the end. An empty string is valid. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/08-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
