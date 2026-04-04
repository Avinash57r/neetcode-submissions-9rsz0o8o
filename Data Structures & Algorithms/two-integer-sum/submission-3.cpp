class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i{0};
        int currentNum{};
        int difference{};
        std::vector<int> finalAnswer;
        std::unordered_map<int,int> seenNums; // value, index
        for(i; i< nums.size(); i++)
        {
            currentNum = nums[i];
            difference = target - currentNum;
            if(seenNums.contains(difference) && seenNums.contains(currentNum))
            {
                finalAnswer.push_back(seenNums[difference]);
                finalAnswer.push_back(i);
                return finalAnswer;
            }
            if(seenNums.contains(difference))
            {
                seenNums[currentNum] = i;

                if( seenNums[difference] < seenNums[currentNum])
                {
                    finalAnswer.push_back(seenNums[difference]);
                    finalAnswer.push_back(seenNums[currentNum]);
                    return finalAnswer;
                }
                else if(seenNums[currentNum]< seenNums[difference])
                {
                    finalAnswer.push_back(seenNums[currentNum]);
                    finalAnswer.push_back(seenNums[difference]);
                    return finalAnswer;
                }
                
            }
            seenNums[currentNum] = i;
        }

    }
};
