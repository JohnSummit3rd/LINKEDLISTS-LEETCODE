#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *curr = head; 
    struct ListNode *prev = NULL;
    
    while (curr != NULL && curr->val == val) {
        struct ListNode *temp = curr; 
        curr = curr->next; 
        head = curr;
    }

    while (curr != NULL) {
        struct ListNode *next = curr->next; 
        if (curr->val == val) {
            prev->next = next; 
        } else {
            prev = curr; 
        }
       
        curr = next; 
    }
    return head; 
}