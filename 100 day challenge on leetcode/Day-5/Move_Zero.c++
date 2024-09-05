class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        l = 0
        for x in range(len(nums)):
            if nums[x] != 0:
                nums[l], nums[x] = nums[x], nums[l]
                l = l+1
        return nums