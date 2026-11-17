class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seenValues; // complement , index
        int complement{0};
        for(int i = 0; i < nums.size(); ++i)
        {
            complement = target - nums[i];
            if(seenValues.contains(complement))
            {
                return{seenValues[complement], i};
            }
            else
            {
                seenValues.insert({nums[i],i});
            }

        }
        return{};
    }
};