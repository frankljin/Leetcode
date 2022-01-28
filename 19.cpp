class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *toRemove = head;
        ListNode *remove = head;
        int total = 0;
        while (toRemove) {
            total += 1;
            toRemove = toRemove->next;
        }
        if (total == n) {
            return head->next;
        }
        int nth = total - n - 1;
        while (nth > 0) {
            remove = remove->next;
            nth -= 1;
        }
        remove->next = remove->next->next;
        return head;
        
    }
};
