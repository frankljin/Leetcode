class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast->next && fast->next->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if (fast->next) {
            slow = slow->next;
        }
        slow = reverse(slow);
        fast = head;
        while (slow) {
            if (fast->val != slow->val) return false;
            fast = fast->next;
            slow = slow->next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode *head) {
        ListNode *prev = nullptr;
        while (head) {
            ListNode *next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }
};