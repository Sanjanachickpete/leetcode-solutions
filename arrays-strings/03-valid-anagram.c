#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* LeetCode solution: inputs contain lowercase English letters. */
bool isAnagram(char* s, char* t) {
    int letterCounts[26] = {0};

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int index = 0; s[index] != '\0'; index++) {
        letterCounts[s[index] - 'a']++;
        letterCounts[t[index] - 'a']--;
    }

    for (int index = 0; index < 26; index++) {
        if (letterCounts[index] != 0) {
            return false;
        }
    }

    return true;
}

/* Local tests; LeetCode submissions should contain the solution above only. */
int main(void) {
    printf("Normal: %s (expected true)\n",
           isAnagram("anagram", "nagaram") ? "true" : "false");
    printf("Different letters: %s (expected false)\n",
           isAnagram("rat", "car") ? "true" : "false");
    printf("Empty strings: %s (expected true)\n",
           isAnagram("", "") ? "true" : "false");

    return 0;
}
