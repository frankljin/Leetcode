class Solution:
    def increasingBST(self, root: TreeNode) -> TreeNode:
        res = TreeNode()
        curr = res
        def inorder(root: TreeNode) -> Generator[int, TreeNode, None]:
            if root:
                yield from inorder(root.left)
                yield root.val
                yield from inorder(root.right)
        for value in inorder(root):
            curr.right = TreeNode(value)
            curr = curr.right
        return res.right
        