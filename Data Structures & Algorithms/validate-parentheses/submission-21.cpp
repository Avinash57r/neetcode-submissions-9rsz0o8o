class Solution {
public:
    bool isValid(string s) {

        if(s.length() % 2 != 0) {return false;}

        std::vector<char> stack;
        stack.reserve(s.length()/2);

        for(char c : s)
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
