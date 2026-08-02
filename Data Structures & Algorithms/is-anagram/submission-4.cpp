class Solution {
public:
    bool isAnagram(string s, string t) {

        std::unordered_map <char, int> frequencyMapS;
        std::unordered_map <char, int> frequencyMapT;


        for(int i = 0; i< s.size(); i++)
        {
            frequencyMapS[s[i]]++;
        }

        for(int i = 0; i< t.size(); i++)
        {
            frequencyMapT[t[i]]++;
        }

        if(frequencyMapS == frequencyMapT) {return true;}
        else {return false;}
        
    }
};
