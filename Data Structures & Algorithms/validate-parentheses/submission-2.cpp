class Solution {
public:
    bool isValid(string s) {
        
        std::stack <char> brackets;
        std::unordered_map <char,char> bracketMap =
        {
            {')' , '('},
            {'}', '{'},
            {']' , '['}
        };

        for(char c : s)
        {
            if(bracketMap.contains(c))
            {
                if(brackets.empty() || brackets.top() != bracketMap[c])
                {
                    return false;
                }
                else
                {
                    brackets.pop();
                }
            }
            if(!bracketMap.contains(c))
            {
                brackets.push(c);
            }
        }

        if(brackets.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
