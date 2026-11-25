#include <stdio.h>

/* LeetCode solution: move zeroes to the end without reordering other values. */
void moveZeroes(int* nums, int numsSize) {
    int nextNonZero = 0;

    for (int index = 0; index < numsSize; index++) {
        if (nums[index] != 0) {
            int temporary = nums[nextNonZero];
            nums[nextNonZero] = nums[index];
            nums[index] = temporary;
            nextNonZero++;
        }
    }
}

static void printNumbers(const int* nums, int numsSize) {
    printf("[");
    for (int index = 0; index < numsSize; index++) {
        printf("%s%d", index == 0 ? "" : ", ", nums[index]);
    }
    printf("]");
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    int normalNumbers[] = {0, 1, 0, 3, 12};
    moveZeroes(normalNumbers, 5);
    printf("Normal: ");
    printNumbers(normalNumbers, 5);
    printf(" (expected [1, 3, 12, 0, 0])\n");

    int allZeroes[] = {0, 0, 0};
    moveZeroes(allZeroes, 3);
    printf("All zeroes: ");
    printNumbers(allZeroes, 3);
    printf(" (expected [0, 0, 0])\n");

    int noZeroes[] = {4, 2, 1};
    moveZeroes(noZeroes, 3);
    printf("No zeroes: ");
    printNumbers(noZeroes, 3);
    printf(" (expected [4, 2, 1])\n");

    return 0;
}
