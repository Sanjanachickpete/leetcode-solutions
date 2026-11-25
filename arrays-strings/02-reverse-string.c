#include <stdio.h>
#include <string.h>

/* LeetCode solution: reverse the character array in place. */
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temporary = s[left];
        s[left] = s[right];
        s[right] = temporary;
        left++;
        right--;
    }
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    char normal[] = "hello";
    reverseString(normal, (int)strlen(normal));
    printf("Normal: %s (expected olleh)\n", normal);

    char oneCharacter[] = "a";
    reverseString(oneCharacter, (int)strlen(oneCharacter));
    printf("One character: %s (expected a)\n", oneCharacter);

    char empty[] = "";
    reverseString(empty, 0);
    printf("Empty string: \"%s\" (expected \"\")\n", empty);

    return 0;
}
