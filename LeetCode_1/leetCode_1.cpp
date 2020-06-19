#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> seen;
        
        //loop through container by index
        for(int i = 0; i < nums.size(); ++i) {
            int x = target - nums[i]; //complement

            if(seen.find(x) != seen.end())
                return {seen[x], i};
            
            //if cannot find, add to the map
            seen[nums[i]] = i;
        }
        
        return {};
    }
};

/*
Runtime: 12 ms, faster than 93.13% of C++ online submissions for Two Sum.
Memory Usage: 9.9 MB, less than 47.25% of C++ online submissions for Two Sum.
*/