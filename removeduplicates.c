Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};


struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *curr = head; 

    while (curr != NULL) {
        struct ListNode *next = curr->next;
        if (next != NULL && (curr->val == next->val)) {
            curr->next = next->next; 
            free(next);
            continue;
        } 
        curr = curr->next;
    }   
    return head; 
}