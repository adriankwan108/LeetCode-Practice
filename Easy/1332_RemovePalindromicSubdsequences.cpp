class Solution {
public:
    int removePalindromeSub(string s) 
    {
        /*
            As there are only 2 possible characters,
            the answer will always be 2 unless S is already a palindrome
            this problem is dealing with subsequences, not substrings
        */
        if(s == "") return 0;
        for(int i=0, j=s.size()-1; i<s.size() && j>0; i++, j--)
        {
            if(s[i]!=s[j]) return 2;
        }
        return 1;
    }
};

/*
    0   ms, faster than 100.00%
    6.2 MB, less than    26.79%
*/