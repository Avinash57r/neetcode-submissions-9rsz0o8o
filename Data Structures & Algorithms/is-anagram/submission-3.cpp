class Solution {
public:
    bool isAnagram(string s, string t) {
        
        std::unordered_map <char,int> s_dict;
        std::unordered_map <char,int> t_dict;
        
        //for s 
        int i{0};
        char s_letter;

        //for t
        int j{0};
        char t_letter;

        if(s.size() != t.size())
        {
            return false;
        }

        for(i; i<s.size() ; i++)
        {
            s_letter = s[i];
            s_dict[s_letter] = ++ s_dict[s_letter];
        }

        for(j; j<t.size() ; j++)
        {
            t_letter = t[j];
            t_dict[t_letter] = ++ t_dict[t_letter];
        }

        for(const auto& s_pair : s_dict)
        {
            if(t_dict.contains(s_pair.first) == false)
            {
                return false;
            }

            if(t_dict.contains(s_pair.first))
            {
                if (t_dict[s_pair.first] != s_pair.second)
                {
                    return false;
                }

            }
        }
        return true;

    }
};
