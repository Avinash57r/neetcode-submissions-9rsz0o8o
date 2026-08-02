class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map <int,int> pastNums;

        for(int i = 0; i<nums.size(); i++)
        {
            int difference = target - nums[i];
            if(pastNums.contains(difference))
            {
                if(i< pastNums[difference]) 
                {
                    return {i, pastNums[difference]};
                } 
                else
                {
                    return {pastNums[difference], i};
                }
            }

            pastNums[nums[i]] = i;
        }
        return {};
        
    }
};
