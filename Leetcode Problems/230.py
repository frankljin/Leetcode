class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        def inorder(root: Optional[TreeNode]) -> Generator[int, Optional[TreeNode], None]:
            if root:
                yield from inorder(root.left)
                yield root.val
                yield from inorder(root.right)
        curr = 0
        for i in inorder(root):
            curr += 1
            if curr == k:
                return i
            