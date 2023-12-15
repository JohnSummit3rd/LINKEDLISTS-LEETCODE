#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* insertGreatestCommonDivisors(struct ListNode* head){
    struct ListNode *curr = head->next; 
    struct ListNode *prev = curr;

    while (curr != NULL) {
        for (int i = 1; i <= curr->val && i <= prev->val; i++) {
            if (curr->val % i == 0 && prev->val % i == 0) {
                struct ListNode *gcd = (struct ListNode*)malloc(sizeof(struct ListNode));
                gcd->val = i;
                prev->next = gcd;
                gcd->next = curr; 
            }
        }
            prev = curr; 
            curr = curr->next; 
    }
    return head; 
}