class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int,int> seenNums;

        int i{0};
        int curr{};
        int difference{};

        std::vector <int> answer;
        for(i; i < nums.size() ; i++)
        {
            curr = nums[i];
            difference = target - curr;
            if(seenNums.contains(difference))
            { //return smaller index first

                if(seenNums[difference] == i)
                {
                    answer.push_back(seenNums[difference]);
                    answer.push_back(i);
                    return answer;
                }

                if(seenNums[difference] < i)
                {
                    answer.push_back(seenNums[difference]);
                    answer.push_back(i);
                    return answer;
                }

                else if(i < seenNums[difference])
                {
                    answer.push_back(i);
                    answer.push_back(seenNums[difference]);
                    return answer;
                }
            }

            seenNums[curr] = i;
        }
    }
};
