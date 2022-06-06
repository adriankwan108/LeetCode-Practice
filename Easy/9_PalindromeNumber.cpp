class Solution {
public:
    bool isPalindrome(int x) 
    {
        //convert to string
        string input = to_string(x);
        
        //two pointer
        int left = 0, right = input.size()-1;
        while(left<right)
        {
            if(input[left]!=input[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};

/*
    17ms, faster than 61.10%
    6 mb, less than 32.90%
*/