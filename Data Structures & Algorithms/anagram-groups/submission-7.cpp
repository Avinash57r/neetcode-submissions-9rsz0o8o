class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> anagrams;

        for(string& s : strs)
        {
            vector<int> count(26,0);
            for(char&c : s) //make the key string
            {
                count[c - 'a']++;
            }
            //make the key string
            string key = "";
            for(int i = 0; i<26 ; i++)
            {
                key += to_string(count[i]) + "#";
            }


            //add key and value string to hashmap
            anagrams[key].push_back(s);
        }
        
        std::vector<vector<string>> result;
        //return list
        for(auto& pair : anagrams)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
