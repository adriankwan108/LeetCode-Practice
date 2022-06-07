class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> myStack;
        
        for(auto bracket:s)
        {
            if(bracket=='('|| bracket=='{'|| bracket == '[') myStack.push(bracket);
            else
            {
                if(myStack.empty()) return false;
                
                if(myStack.top()=='(' && bracket!=')' || myStack.top()=='{' && bracket!='}' || myStack.top()=='[' && bracket!=']')
                    return false;
                
                myStack.pop();
            }   
        }
        return myStack.empty();
    }
};

/*
      0 ms, faster than   100%
    6.3 mb,   less than 51.65%
*/