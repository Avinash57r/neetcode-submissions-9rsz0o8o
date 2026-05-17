class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int leftMatrix = 0;
        int rightMatrix = matrix.size() -1;
        int rowLength = matrix[0].size() -1;

        while(leftMatrix <= rightMatrix)
        {
            int midMatrix = leftMatrix + ((rightMatrix - leftMatrix) /2); //find mid
            for(int element: matrix[midMatrix])
            {
                if (element == target) {return true;}
            }
            //get rid of right
            if(target < matrix[midMatrix][0]) {rightMatrix = midMatrix -1;}
            //get rid of left side
            else if(target > matrix[midMatrix][rowLength]) {leftMatrix = midMatrix +1;}
            else {return false;}
        }
        return false;
        
    }
};
