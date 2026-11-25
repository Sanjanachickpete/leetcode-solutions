## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Track the next position where a non-zero value belongs. Scan from left to right and swap each non-zero value into that position, then advance it. This keeps the non-zero values in their original order and moves zeroes to the end.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes
The method also works when every value is zero or when there are no zeroes. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/07-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
