class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int i{0};
        int currentNum{};
        int difference{};
        int num1{};
        int num2{};
        std::vector<int> finalAnswer;
        std::unordered_map<int,int> seenNums; // value, index
        for(i; i< nums.size(); i++)
        {
            currentNum = nums[i];
            difference = target - currentNum;
            if(seenNums.contains(difference) && seenNums.contains(currentNum))
            {
                num2 = i;
                num1 = seenNums[difference];
                finalAnswer.push_back(num1);
                finalAnswer.push_back(num2);
                return finalAnswer;
            }
            if(seenNums.contains(difference))
            {
                seenNums[currentNum] = i;
                num1 = seenNums[difference];
                num2 = seenNums[currentNum];

                if( num1 < num2)
                {
                    finalAnswer.push_back(num1);
                    finalAnswer.push_back(num2);
                    return finalAnswer;
                }
                else if(num2< num1)
                {
                    finalAnswer.push_back(num2);
                    finalAnswer.push_back(num1);
                    return finalAnswer;
                }

                else if(num1 == num2)
                {
                    finalAnswer.push_back(num2);
                    finalAnswer.push_back(num1);
                    return finalAnswer;
                }
                
            }
            seenNums[currentNum] = i;
        }

    }
};
