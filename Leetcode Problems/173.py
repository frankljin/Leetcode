class BSTIterator:

    def __init__(self, root: Optional[TreeNode]):
        self.numbers = []
        self.curr = 0
        def inorder(root: Optional[TreeNode]):
            if root:
                inorder(root.left)
                self.numbers.append(root.val)
                inorder(root.right)
        inorder(root)
            
            
    def next(self) -> int:
        res = self.numbers[self.curr]
        self.curr += 1
        return res
        

    def hasNext(self) -> bool:
        return self.curr < len(self.numbers)
