class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        fast, slow = head, head
        for _ in range(k - 1):
            fast = fast.next
        kth_node = fast
        while fast.next:
            slow = slow.next
            fast = fast.next
        kth_node.val, slow.val = slow.val, kth_node.val
        return head
        