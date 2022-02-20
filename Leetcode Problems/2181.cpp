class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode *res = new ListNode();
        ListNode *resPtr = res;
        bool startMerge = false;
        while (head) {
            if (head->val == 0 && !startMerge) {
                startMerge = true;
            } else if (head->val == 0 && startMerge) {
                if (head->next) {
                    resPtr->next = new ListNode();
                    resPtr = resPtr->next;
                }
            } else {
                resPtr->val += head->val;
            }
            head = head->next;
        }
        return res;        
    }
};