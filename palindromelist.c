#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow = head; 
    struct ListNode *fast = head; 

    while(fast != NULL && fast->next != NULL) {
        slow = slow->next; 
        fast = fast->next->next;
    }

    struct ListNode *rev_curr = slow; 
    struct ListNode *rev_next = NULL;
    struct ListNode *rev_prev = NULL;

    while (rev_curr != NULL) {
        rev_next = rev_curr->next; 
        rev_curr->next = rev_prev;
        rev_prev = rev_curr; 
        rev_curr = rev_next; 
    }

    while (head != NULL && rev_prev != NULL) {
        if (head->val != rev_prev->val) {
            return false; 
        }
        head = head->next; 
        rev_prev = rev_prev->next; 
    }
    return true; 
}
