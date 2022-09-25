class Solution:
    def constructBST(self, left, right, nums: List[int]) -> TreeNode:
        if left > right:
            return None
        mid = (left + right) // 2
        root = TreeNode(nums[mid])
        root.left = self.constructBST(left, mid - 1, nums)
        root.right = self.constructBST(mid + 1, right, nums)
        return root
    
    def sortedArrayToBST(self, nums: List[int]) -> Optional[TreeNode]:
        return self.constructBST(0, len(nums) - 1, nums)
        
        