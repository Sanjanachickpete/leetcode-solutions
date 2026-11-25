#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* LeetCode solution: caller receives a newly allocated prefix string. */
char* longestCommonPrefix(char** strs, int strsSize) {
    int prefixLength = 0;

    if (strsSize <= 0) {
        return calloc(1, sizeof(char));
    }

    while (strs[0][prefixLength] != '\0') {
        char character = strs[0][prefixLength];

        for (int stringIndex = 1; stringIndex < strsSize; stringIndex++) {
            if (strs[stringIndex][prefixLength] != character) {
                char* prefix = malloc((size_t)prefixLength + 1);
                if (prefix == NULL) {
                    return NULL;
                }
                memcpy(prefix, strs[0], (size_t)prefixLength);
                prefix[prefixLength] = '\0';
                return prefix;
            }
        }

        prefixLength++;
    }

    char* prefix = malloc((size_t)prefixLength + 1);
    if (prefix == NULL) {
        return NULL;
    }
    memcpy(prefix, strs[0], (size_t)prefixLength);
    prefix[prefixLength] = '\0';
    return prefix;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    char* normalStrings[] = {"flower", "flow", "flight"};
    char* normalResult = longestCommonPrefix(normalStrings, 3);
    printf("Normal: %s (expected fl)\n", normalResult);
    free(normalResult);

    char* noPrefixStrings[] = {"dog", "racecar", "car"};
    char* noPrefixResult = longestCommonPrefix(noPrefixStrings, 3);
    printf("No common prefix: \"%s\" (expected \"\")\n", noPrefixResult);
    free(noPrefixResult);

    char* oneString[] = {"alone"};
    char* oneStringResult = longestCommonPrefix(oneString, 1);
    printf("One string: %s (expected alone)\n", oneStringResult);
    free(oneStringResult);

    char* emptyResult = longestCommonPrefix(NULL, 0);
    printf("Zero strings: \"%s\" (expected \"\")\n", emptyResult);
    free(emptyResult);

    return 0;
}
