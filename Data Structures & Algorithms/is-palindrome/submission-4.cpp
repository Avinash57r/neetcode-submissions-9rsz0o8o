class Solution {
public:
    bool isPalindrome(string s) {

        int left{0};
        int right {static_cast<int>(s.length() -1) };

        while(left < right)
        {

            while(!std::isalnum(s[left]))
            {
                left++;
            }

            while(!std::isalnum(s[right]))
            {
                right--;
            }

            if( left < right && std::tolower(s[left]) != std::tolower(s[right]))
            {
                return false;
            }

            left++;
            right--;
        }

        return true;
        
    }
};
