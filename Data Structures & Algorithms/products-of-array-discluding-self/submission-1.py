class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        maxInt = math.prod(nums)

        for i in range(len(nums)):
            copy = nums.copy()
            copy.pop(i)
            maxInt = math.prod(copy)
            output.append(maxInt)

        return output