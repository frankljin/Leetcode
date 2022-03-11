class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head) return nullptr;
        ListNode *counter = head;
        int len = 1;
        while (counter->next) {
            len += 1;
            counter = counter->next;
        }
        counter->next = head;
        k %= len;
        for (int i = 0; i < len - k; i++) {
            counter = counter->next;
        }
        head = counter->next;
        counter->next = nullptr;
        return head;
        
        
    }
};