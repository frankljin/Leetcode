class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return None
        right, left = root.right, root.left
        root.right = self.invertTree(left)
        root.left = self.invertTree(right)
        return root
        