#include <array>;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map < string, vector<string>> dict;
        std::vector <vector<string>> anagrams;

        for(std::string& subString : strs)
        {
            std::array <int,26> frequency{};
            for(char& c : subString)
            {
                frequency [c-'a']++;
            }
            std::string key = "";
            for(int i{0}; i< frequency.size() ; i++)
            {
                key += std::to_string(frequency[i]) + '#';
            }

            dict[key].push_back(subString);
        }

        for ( auto& pair : dict)
        {
            anagrams.push_back(pair.second);
        }

        return anagrams;

    }
};
