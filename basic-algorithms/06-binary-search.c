#include <stdio.h>

/* LeetCode solution: nums is sorted in ascending order. */
int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (nums[middle] == target) {
            return middle;
        }
        if (nums[middle] < target) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    int sortedNumbers[] = {-1, 0, 3, 5, 9, 12};
    printf("Found target: %d (expected 4)\n",
           search(sortedNumbers, 6, 9));

    printf("Empty array: %d (expected -1)\n",
           search(NULL, 0, 7));

    printf("Missing target: %d (expected -1)\n",
           search(sortedNumbers, 6, 2));

    return 0;
}
