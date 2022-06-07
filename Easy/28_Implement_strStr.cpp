class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        //this is not a kmp algorithm implementation
        //it is a brute-force (O(m*n))
        //kmp could be faster (O(m+n))
        if(haystack.size()==0) return 0;
        
        for(int i=0 ; i < haystack.size(); i++)
        {
            int j=0;
            while(j < needle.size())
            {
                if(haystack[i+j] != needle[j]) break;
                else if(j== needle.size()-1)
                    return i;                    
                
                j++;
            }
        }
        
        return -1;
    }
};

/*
    O(m*n)
    0   ms, faster than 41.90% 
    6.4 MB, less   than 22.81% 
*/