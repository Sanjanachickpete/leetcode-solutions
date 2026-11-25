## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Keep a left and right boundary in the sorted array. Check the middle value; if it is too small, continue in the right half, and if it is too large, continue in the left half. Return the matching index or `-1` if the search range becomes empty.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes
An empty input immediately returns `-1`, and the midpoint formula avoids adding the two bounds directly. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/06-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
