class Solution:
    def findClosestNumber(self, nums: List[int]) -> int:
        nums = sorted(nums)
        minDist = abs(nums[0])
        maxVal = nums[0]
        for num in nums:
            if abs(num) <= minDist:
                minDist = abs(num)
                if num > maxVal:
                    maxVal = num
        return maxVal