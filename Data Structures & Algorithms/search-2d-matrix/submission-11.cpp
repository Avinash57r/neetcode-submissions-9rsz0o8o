class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int leftMatrix = 0;
        int rightMatrix = matrix.size() -1;
        int rowLength = matrix[0].size() -1;

        while(leftMatrix <= rightMatrix)
        {
            int midMatrix = leftMatrix + ((rightMatrix - leftMatrix) /2); //find mid
            int midMatrix_left = 0;
            int midMatrix_right = rowLength;

            while(midMatrix_left <= midMatrix_right)
            {
                int midMatrix_mid = midMatrix_left + ((midMatrix_right -midMatrix_left)/2);
                if(target == matrix[midMatrix][midMatrix_mid]) {return true;}
                //get rid of right
                if(target< matrix[midMatrix][midMatrix_mid]) {midMatrix_right = midMatrix_mid -1;}
                //get rid of left
                else if(target > matrix[midMatrix][midMatrix_mid]) {midMatrix_left = midMatrix_mid +1;}
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
