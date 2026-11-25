## Problem: Reverse Linked List (Easy)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Walk through the list while keeping pointers to the previous node, current node, and next node. Save the next node before reversing the current link, then advance both pointers. The previous pointer is the new head when the loop ends.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes
An empty list returns `NULL`; the local tests also reverse a four-node list. The local file includes the standard `struct ListNode` definition so it can compile independently, but LeetCode provides that definition, so omit it when submitting. After you personally submit this bonus problem and see **Accepted**, capture that page and save it as `screenshots/09-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
