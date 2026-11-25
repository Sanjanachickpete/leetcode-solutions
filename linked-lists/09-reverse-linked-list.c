#include <stdio.h>
#include <stdlib.h>

/* Local harness definition. LeetCode provides this type; omit it when submitting. */
struct ListNode {
    int val;
    struct ListNode* next;
};

/* LeetCode solution: reverse the links without allocating replacement nodes. */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;
        current->next = previous;
        previous = current;
        current = nextNode;
    }

    return previous;
}

static void printList(const struct ListNode* node) {
    printf("[");
    while (node != NULL) {
        printf("%d", node->val);
        node = node->next;
        if (node != NULL) {
            printf(", ");
        }
    }
    printf("]");
}

/* Local tests; LeetCode submissions should contain only reverseList(). */
int main(void) {
    struct ListNode fourth = {4, NULL};
    struct ListNode third = {3, &fourth};
    struct ListNode second = {2, &third};
    struct ListNode first = {1, &second};

    struct ListNode* reversed = reverseList(&first);
    printf("Normal list: ");
    printList(reversed);
    printf(" (expected [4, 3, 2, 1])\n");

    struct ListNode* empty = reverseList(NULL);
    printf("Empty list: %s (expected NULL)\n",
           empty == NULL ? "NULL" : "not NULL");

    return 0;
}
