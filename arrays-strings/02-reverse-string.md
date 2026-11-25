## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Use one index at the beginning and one at the end of the character array. Swap those characters, then move both indices toward the middle. The input array is changed in place.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes
A one-character string and an empty array need no swaps. The local tests cover both, as well as a typical word. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/02-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
