from typing import List


class Solution:
    def bruteForce(self, nums: List[int]) -> None:
        count0 = count1 = count2 = 0
        for i in nums:
            if i == 0:
                count0 += 1
            elif i == 1:
                count1 += 1
            else:
                count2 += 1

        for i in range(count0):
            nums[i] = 0
        for i in range(count0, count0 + count1):
            nums[i] = 1
        for i in range(count0 + count1, count0 + count1 + count2):
            nums[i] = 2
    
    # DNF (Dutch National Flag) algorithm
    def optimal(self, nums: List[int]) -> None:
        l = m = 0
        h = len(nums) - 1
        while m <= h:
            if nums[m] == 0:
                nums[m], nums[l] = nums[l], nums[m]
                l+=1
                m+=1
            elif nums[m] == 1:
                m+=1
            else:
                nums[m], nums[h] = nums[h], nums[m]
                h-=1
        