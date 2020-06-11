#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        bool end = false;
        int secondTarget;
        
        for(vector<int>::iterator it = nums.begin(); it!=nums.end(); it++){
            secondTarget = target - (*it);
            
            if(end == false){
                for(vector<int>::iterator itTwo = it+1; itTwo!=nums.end(); itTwo++){
                    if((*itTwo)==secondTarget){
                        answer.push_back(it-nums.begin());
                        answer.push_back(itTwo-nums.begin());
                        end = true;
                        break;
                    }
                }    
            }else{
                break;
            }
        }
        return answer;
    }
};

/*
Runtime: 1972 ms, faster than 5.01% of C++ online submissions for Two Sum.
Memory Usage: 9.3 MB, less than 48.65% of C++ online submissions for Two Sum.
*/