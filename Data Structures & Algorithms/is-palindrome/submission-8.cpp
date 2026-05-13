#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {

        std::string alphaString{};
        int startIndex {0};
        int endIndex{};
        for(char &c: s)
        {
            if(std::isalnum(c)) {alphaString.push_back(std::tolower(c));}
        } //normalized string
        
        endIndex = alphaString.length() -1;
        while( startIndex <= endIndex)
        {
            if(alphaString[startIndex] != alphaString[endIndex]) {return false;}
            startIndex++;
            endIndex--;
        }

        return true;
        
    }
};
