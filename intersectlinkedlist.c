/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL) {
        return NULL;
    }

    while (headA != NULL && headB != NULL) {
        if (headA == headB) {
            return headA->val; 
        }
        headA = headA->next; 
        headB = headB->next; 
    }

    return NULL;
}