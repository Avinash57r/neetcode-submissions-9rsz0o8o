class Solution {
public:
    bool isValid(string s) {
        
        std::unordered_map<char,char> symbolPair =
        {
            {'(', ')'},
            {'{', '}'},
            {'[',']'}
        };
        std::stack<char> mainStack;
        for(char& c : s)
        {
            if(mainStack.empty() && !symbolPair.contains(c)) {return false;}
            else if(symbolPair.contains(c)) {mainStack.push(c);}
            else if(symbolPair[mainStack.top()] == c ) {mainStack.pop();}
            else if(symbolPair[mainStack.top()] != c) {return false;}
        }

        return(mainStack.empty());

    }
};
