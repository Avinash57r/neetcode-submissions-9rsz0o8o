class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int currentIndex = (nums.size() /2);
        if(nums[currentIndex] == target){return currentIndex;}
        
        bool goLeft = (nums[currentIndex] > target);
        while(currentIndex < (nums.size()) && currentIndex >= 0)
        {
            if(nums[currentIndex] == target) {return currentIndex;}
            if(goLeft) //left side
            {
                currentIndex--;
            }else //right side
            {
                currentIndex++;
            }
        }

        return -1;
        


        
    }
};
