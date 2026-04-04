class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        std::unordered_map<int,int> seenValues;
        int i{0};
        int k{};
        for (i; i< nums.size() ; i++)
        {
            k = nums[i];
            if (seenValues.contains(k))
            {
                return true;
            }
            seenValues[k] = i;
        }
        return false;
    }
};