class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode *curr = ans;
        int remainder = 0;
        while (l1 || l2) {
            int sum = 0;
            sum += remainder;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            remainder = sum / 10;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        if (remainder) {
            curr->next = new ListNode(remainder);
        }
        return ans->next;
    }
};
