struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *curr1 = list1;
    struct ListNode *curr2 = list2;

    while (curr1 != NULL || curr2 != NULL) {
        if (curr2 > curr1) {
            curr1->next = curr2; 
        }

        curr1 = curr1->next; 
        curr2 = curr2->next; 
    }
}