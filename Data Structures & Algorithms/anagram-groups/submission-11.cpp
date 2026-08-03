class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> anagrams;

        for(string& s : strs)
        {
            std::vector<int> count (26,0); //25 letters in alphabet
            for(char& c : s) //store letter frequency
            {
                count[c-'a']++;
            }
            // turn frequency into key
            string key = "";
            for(int i =0; i<26 ; i++)
            {
                key += to_string(count[i]) + "#";
            }

            anagrams[key].push_back(s); //add pair to dictionary
        }

        std::vector<vector<string>> result;
        //return result
        for(auto& pair : anagrams)
        {
            result.push_back(std::move(pair.second));
        }

        return result;
    }
};
