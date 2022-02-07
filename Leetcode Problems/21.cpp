class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *fin = new ListNode();
        ListNode *res = fin;
        while (list1 || list2) {
            res->next = new ListNode();
            res = res->next;
            if (list1 && list2) {
                if (list1->val > list2->val) {
                    res->val = list2->val;
                    list2 = list2->next;
                } else {
                    res->val = list1->val;
                    list1 = list1->next;
                }
            } else if (list1) {
                res->val = list1->val;
                list1 = list1->next;
            } else {
                res->val = list2->val;
                list2 = list2->next;
            }
        }
        return fin->next;
    }
};