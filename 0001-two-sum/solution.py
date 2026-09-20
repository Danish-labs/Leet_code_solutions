class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}

        for i in range(len(nums)):
            current = nums[i]
            needed = target - current

            if needed in seen:
                return [seen[needed], i]

            seen[current] = i
