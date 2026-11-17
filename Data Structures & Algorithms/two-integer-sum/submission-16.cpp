class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seenValues; // complement , index
        for(int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if((seenValues.contains(complement)) && (seenValues[complement] != i))
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