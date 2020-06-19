class Solution:
    def twoSum(self, nums: [int], target: int) -> [int]:
        temp={}
        for i,num in enumerate(nums):
            if( target - num in temp):
                return temp[target-num],  i
            temp[num]=i