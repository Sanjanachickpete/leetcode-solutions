## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Check every pair of different positions using two loops. Return the two indices as soon as their values add up to the target. The returned array is dynamically allocated, as expected by the LeetCode C interface.

### Complexity

- Time: O(n^2)
- Space: O(1) auxiliary space, excluding the two-element result

### Notes
The second loop starts after the first index, so duplicate values at different positions work correctly. The local program prints the expected indices for a normal case and a duplicate-values edge case. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/01-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
