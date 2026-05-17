class Solution {
public:
    int search(vector<int>& nums, int target) {

        //base values
        int low = 0;
        int high = nums.size() -1;

        while(low <= high)
        {
        int mid = low + ((high - low) /2); //find middle
        if(nums[mid] == target) {return mid;} //base case + general check to avoid having to do two if one being out of while loop

        //get rid of right
        if(target < nums[mid]) {high = mid -1;}
        //get rid of left
        if(target > nums[mid]) {low = mid +1;}

        }

        return -1;

        
    }
};
