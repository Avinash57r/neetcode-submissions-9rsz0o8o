class Solution {
public:
    int search(vector<int>& nums, int target) {

        int currentIndex = (nums.size() /2); //find middle point

        if(nums[currentIndex] == target){return currentIndex;} //base case

        bool isLeft = target < nums[currentIndex]; //less than middlepoint

        while(currentIndex >= 0 && currentIndex < nums.size()) //ensure we stay in bounds
        {
            if(nums[currentIndex] == target) {return currentIndex;}
            if(isLeft) { currentIndex--;}
            else{currentIndex++;}
        }

        return -1;
        
    }
};
