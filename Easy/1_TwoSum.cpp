class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*
            algo: 
            1. iterate nums and put <num, index> into hashMap
            2. for each iteration, find (target - data) in the hashMap
            3. if not, iterate next
        */
        
        unordered_map<int,int> hashMap; //<number, index>
        vector<int> result;
        for(int i=0; i<nums.size(); i++)
        {
            int complement = target-nums[i];
            if(hashMap.count(complement)==1)
                return {hashMap[complement],i};
            else
                hashMap[nums[i]] = i;
        }
        return {};
    }
};

//7~20 ms, 10.9 MB
//O(n)