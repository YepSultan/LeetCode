# Two Sum
# Difficulty: Easy

class Solution:
	def twoSum(self, nums: list[int], target: int) -> list[int]:
		for i in range(len(nums)):
			for j in range(i + 1, len(nums)):
				if nums[i] + nums[j] == target:
					return [i, j]


Solution().twoSum([1, 4, 5, 34], 9)

"""
So, basicaly 
first of all we check our array for numbers (like in 'i')
after that we comparing two different elements by using ('for i' and 'for j')
so then we just check if we sum this two elements would we get our target number 
and return it
"""