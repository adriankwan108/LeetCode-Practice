class Solution:
    def twoSum(self, nums: [int], target: int) -> [int]:
        temp={}
        for i,num in enumerate(nums):
            if( target - num in temp):
                return temp[target-num],  i
            temp[num]=i

'''
if __name__ == '__main__':
    sol = Solution()
    testCase = [3,3,4,1]
    answer = sol.twoSum(testCase, 5)
    print(answer)
'''

'''
48~91ms, 15.4 MB
'''