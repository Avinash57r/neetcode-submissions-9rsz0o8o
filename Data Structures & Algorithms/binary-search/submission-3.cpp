class Solution {
public:
    int search(vector<int>& nums, int target) {

        int currentIndex = (nums.size() /2 );

        if(nums[currentIndex] == target) {return currentIndex;} //base case
        bool goLeft = (target < nums[currentIndex]); //condition to avoid double trues during search

        while(currentIndex < nums.size() && currentIndex >= 0)
        {
            if(nums[currentIndex] == target){return currentIndex;}
            if(goLeft) {currentIndex--;}
            else {currentIndex++;}
        }

        return -1;


        
    }
};
