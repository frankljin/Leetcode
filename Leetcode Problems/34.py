class Solution:
    def findRange(self, nums: List[int], mid: int) -> List[int]:
        val = nums[mid]
        leftbound = mid
        rightbound = mid
        i = mid + 1
        while i < len(nums):
            if nums[i] == nums[mid]:
                rightbound += 1
            else:
                break
            i += 1
        i = mid - 1
        while i >= 0:
            if nums[i] == nums[mid]:
                leftbound -= 1
            else:
                break
            i -= 1
        return [leftbound, rightbound]
    
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        left = 0
        right = len(nums) - 1
        while left <= right:
            mid = int((left + right) / 2)
            if nums[mid] == target:
                return self.findRange(nums, mid)
            elif nums[mid] > target:
                right = mid - 1
            elif nums[mid] < target:
                left = mid + 1
        return [-1, -1]
        