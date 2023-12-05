
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* current = NULL;
    struct ListNode* previous = NULL;
    struct ListNode* next = NULL;

    current = head; 

    while (current != NULL) {
        next = current->next; 
        current->next = previous; 
        previous = current; 
        current = next;
    }

    return previous; 
    
}