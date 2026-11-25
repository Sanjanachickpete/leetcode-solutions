## Problem: Best Time to Buy and Sell Stock (Easy)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Scan the prices once while remembering the lowest price seen so far. For each day, calculate the profit from buying at that lowest price and selling today, keeping the best profit. If there are fewer than two prices, return zero.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes
When prices only go down, the best possible profit is zero because no trade is required. After you personally submit this problem and see **Accepted**, capture that page and save it as `screenshots/04-result.png`; see [SCREENSHOTS.md](../SCREENSHOTS.md).
