class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        int i{0};
        int k{};
        std::unordered_map<int,int> dict; //key,value
        for (i; i < nums.size() ; i++)
        {
            k = nums[i];
            if (dict.contains(k))
            {
                return true;
            }
            dict[k] = i;
        }
        return false;
    }
};