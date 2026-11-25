#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* LeetCode solution: use an array as a stack of opening brackets. */
bool isValid(char* s) {
    size_t length = strlen(s);
    char* stack = malloc(length + 1);
    if (stack == NULL) {
        return false;
    }

    size_t stackSize = 0;
    for (size_t index = 0; index < length; index++) {
        char character = s[index];

        if (character == '(' || character == '[' || character == '{') {
            stack[stackSize] = character;
            stackSize++;
        } else {
            if (stackSize == 0) {
                free(stack);
                return false;
            }

            char opening = stack[stackSize - 1];
            bool matchingPair =
                (opening == '(' && character == ')') ||
                (opening == '[' && character == ']') ||
                (opening == '{' && character == '}');

            if (!matchingPair) {
                free(stack);
                return false;
            }
            stackSize--;
        }
    }

    bool valid = stackSize == 0;
    free(stack);
    return valid;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    printf("Nested brackets: %s (expected true)\n",
           isValid("({[]})") ? "true" : "false");
    printf("Wrong bracket types: %s (expected false)\n",
           isValid("(]") ? "true" : "false");
    printf("Unmatched closing bracket: %s (expected false)\n",
           isValid(")") ? "true" : "false");
    printf("Empty string: %s (expected true)\n",
           isValid("") ? "true" : "false");

    return 0;
}
