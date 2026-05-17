class Solution {
public:
    int search(vector<int>& nums, int target) {

        int currentIndex = (nums.size() /2); 

        if(nums[currentIndex] == target){return currentIndex;} 

        bool isLeft = target < nums[currentIndex]; 

        while(currentIndex >= 0 && currentIndex < nums.size()) 
        {
            if(nums[currentIndex] == target) {return currentIndex;}
            if(isLeft) { currentIndex--;}
            else{currentIndex++;}
        }

        return -1;
        
    }
};
