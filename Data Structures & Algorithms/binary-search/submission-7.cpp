class Solution {
public:
    int search(vector<int>& nums, int target) {

        int low = 0;
        int high = nums.size() -1;

        while(low <= high)
        {
            int mid = low + ((high - low) /2) ; //calculate mid
            if(nums[mid] == target) {return mid;}
            //get rid of right side
            if(target < nums[mid]) {high = mid-1;}
            //get rid of the left side
            if(target > nums[mid]) {low = mid+1;}
        }
        return -1;
    }
};
