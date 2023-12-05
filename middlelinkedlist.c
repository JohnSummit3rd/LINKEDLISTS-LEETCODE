#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* middleNode(struct ListNode* head) {
    int counter = 0; 
    struct ListNode* current; 
    current = head; 

    while (current != NULL) {
        counter++; 
        current = current->next; 
    }
    current = head; 
    if (counter % 2 == 0) {
        for (int i = 0; i < (counter + 1) / 2; i++) {
            current = current->next;
        }
        return current; 
    }

    for (int i = 0; i < counter / 2; i++) {
        current = current->next; 
    } 

    return current;
}
