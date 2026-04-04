class Solution {
public:
    bool isAnagram(string s, string t) {

        std::unordered_map <char, int> letters_s;
        std::unordered_map <char, int> letters_t;
        //letters_s
        int i{0};
        int s_key{};

        //letters_t
        int j{0};
        int t_key{};

        int temp{};

        if (s.size() != t.size())
        {
            return false;
        }

        for (j; i<s.size(); i++ )
        {
            s_key = s[i];
            letters_s[s_key] = ++letters_s[s_key];
        }

        for (j; j<t.size(); j++ )
        {
            t_key= t[j];
            letters_t[t_key] = ++letters_t[t_key];
     
        }

        for(const auto& s_pair : letters_s)
        {
           if (letters_t.contains(s_pair.first) == false)
           {
            return false;
           }

           if (letters_t.contains(s_pair.first) == true)
           {
             if(letters_t[s_pair.first] != s_pair.second)
             {
                return false;
             }
           }
        }
        return true;
        
    }
};
