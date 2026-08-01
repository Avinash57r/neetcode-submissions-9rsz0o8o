class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int difference {0};
        std::unordered_map<int, int> pastNums;
        for(int i=0; i < nums.size(); i++)
        {
            difference = target - nums[i];
            if(pastNums.contains(difference))
            {
                return {pastNums[difference], i};
            }
            pastNums[nums[i]] = i;
        }
        
    }
};
