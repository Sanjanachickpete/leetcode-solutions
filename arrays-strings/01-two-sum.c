#include <stdio.h>
#include <stdlib.h>

/* LeetCode solution: returnSize is set to 2 when a pair is found. */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 0;

    for (int first = 0; first < numsSize; first++) {
        for (int second = first + 1; second < numsSize; second++) {
            if (nums[first] + nums[second] == target) {
                int* answer = malloc(2 * sizeof(int));
                if (answer == NULL) {
                    return NULL;
                }

                answer[0] = first;
                answer[1] = second;
                *returnSize = 2;
                return answer;
            }
        }
    }

    return NULL;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    int returnSize = 0;
    int normalNumbers[] = {2, 7, 11, 15};
    int* normalResult = twoSum(normalNumbers, 4, 9, &returnSize);
    printf("Normal: [%d, %d] (expected [0, 1])\n",
           normalResult[0], normalResult[1]);
    free(normalResult);

    int duplicateNumbers[] = {3, 3};
    int* duplicateResult = twoSum(duplicateNumbers, 2, 6, &returnSize);
    printf("Duplicates: [%d, %d] (expected [0, 1])\n",
           duplicateResult[0], duplicateResult[1]);
    free(duplicateResult);

    return 0;
}
