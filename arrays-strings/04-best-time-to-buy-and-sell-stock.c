#include <stdio.h>

/* LeetCode solution: return the greatest profit from one buy and one sale. */
int maxProfit(int* prices, int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int lowestPrice = prices[0];
    int bestProfit = 0;

    for (int day = 1; day < pricesSize; day++) {
        int profitToday = prices[day] - lowestPrice;
        if (profitToday > bestProfit) {
            bestProfit = profitToday;
        }
        if (prices[day] < lowestPrice) {
            lowestPrice = prices[day];
        }
    }

    return bestProfit;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    int normalPrices[] = {7, 1, 5, 3, 6, 4};
    printf("Normal: %d (expected 5)\n", maxProfit(normalPrices, 6));

    int decreasingPrices[] = {7, 6, 4, 3, 1};
    printf("Decreasing prices: %d (expected 0)\n",
           maxProfit(decreasingPrices, 5));

    int oneDayPrice[] = {5};
    printf("One day: %d (expected 0)\n", maxProfit(oneDayPrice, 1));

    return 0;
}
