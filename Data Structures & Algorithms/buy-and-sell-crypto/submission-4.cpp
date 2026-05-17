class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int leftIndex {0};
        int rightIndex {1};
        int maxProfit = {0};

        while(rightIndex < prices.size())
        {
            if(prices[rightIndex] < prices[leftIndex])
            {
                leftIndex = rightIndex;
                //rightIndex++;
            }



            if( maxProfit < prices[rightIndex] - prices[leftIndex])
            {maxProfit = prices[rightIndex] - prices[leftIndex];}

            rightIndex++; //out of bounds
            
        }
        return maxProfit;
    }
};
