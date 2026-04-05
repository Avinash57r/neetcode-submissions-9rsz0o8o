#include <array>


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map <string, vector<string>> anagrams;
        std::vector <vector<string>> organizedAnagrams;

        for( const string& subString : strs)
        {
            array<int,26> frequency{0};
        
            for( const char& c : subString)
            {
                frequency[c - 'a']++;
            }

            std::string key = "";
            for(int i{0}; i<26 ; i++)
            {
                key += to_string(frequency[i]) + '#';
            }
            anagrams[key].push_back(subString);
    
        }

        for(auto& pair : anagrams)
        {
            organizedAnagrams.push_back(pair.second);
        }
        
        return organizedAnagrams;
    }
};
