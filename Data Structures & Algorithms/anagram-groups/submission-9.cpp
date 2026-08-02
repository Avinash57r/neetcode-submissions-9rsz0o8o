class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::unordered_map<string, vector<string>> anagrams;
        for(string& s : strs)
        {
            vector<int> count (26, 0);
            for(char& c : s) //check frequency of each letter and store in count
            {
                count[c- 'a']++; //adding based on letter number as index and incremneting form 0 how many times it appeared
            }
            //make the key
            string key = "";
            for(int i= 0; i<26; i++)
            {
                key += to_string(count[i]) + "#";
            }
            //add key value pair in hash map using key and main substring as value
            anagrams[key].push_back(s);
        }
        std::vector<vector<string>> result;
        //get result
        for(auto& pair : anagrams)
        {
            result.push_back(pair.second);
        }

        return result;
    }
};
