class Solution {
public:
    bool isPalindrome(string s) {

        std::deque<char> reverseString;
        std::deque<char> normalString;
        for( char& c : s)
        {
            unsigned char unsigned_c;
            unsigned_c = static_cast<unsigned char>(c);
            if( std::isalnum(unsigned_c) == false)
            {
                continue;
            }
            unsigned char lowered;
            lowered = std::tolower(unsigned_c);
            reverseString.push_front(lowered);
            normalString.push_back(lowered);
        }


        if( reverseString == normalString)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};
