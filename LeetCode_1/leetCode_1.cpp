class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //std::unordered_map is better than std::map
        std::unordered_map<int,int> mapping;
        int complement;

        for(int i = 0; i< nums.size(); i++)
        {
            complement = target-nums[i];

            //find if the complement is inside our visited map
            if(mapping.count(complement))   //if true, found and return
            {
                return {mapping[complement],i};
            }

            //if cannot find, add the current number in vector<int> nums to the mapping
            mapping.insert(std::pair<int,int>(nums[i],i));
        }

        //if nothing, return nothing
        return {};
    }
};

//7~20 ms, 10.9 MB