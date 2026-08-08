class Solution {
public:
    bool isValid(string s) {

        std::unordered_map<char,char> parenMap
        {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        //step 1: check if char is open ( if so push to stack) if not compare against top
        //step 2: 
        std::stack<char> currStack;
        //step 1: check if char is open
        for(char& c : s)
        {
            // base case
            if(!parenMap.contains(c) && currStack.empty()){return false;}
            //
            if(parenMap.contains(c)) {currStack.push(c);}
            else if(parenMap[currStack.top()] == c) {currStack.pop();}
            else if(parenMap[currStack.top()] != c) { return false;}
        }
        
        return(currStack.empty());
    }
};
