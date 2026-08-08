class Solution {
public:
    bool isValid(string s) {

        if(s.length() % 2 != 0) {return false;}

        std::vector<char> stack;
        stack.reserve(s.length()/2);

        for(char c : s) //no ref since pointer takes 8 bits and copy of char is only 1 (can fit in cpu register) where as ref (pointer) requires de ref and larger 8 bit space taken up
        {
            if(c == '(') {stack.push_back(')');}
            else if(c == '{') {stack.push_back('}');}
            else if(c == '[') {stack.push_back(']');}
            else 
            {
                if (stack.empty() || stack.back() != c) {return false;}
                stack.pop_back();
            }
        }

        return(stack.empty());
        
    }
};
