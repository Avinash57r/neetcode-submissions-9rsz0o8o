class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int leftMatrix{0};
        int rowLength = matrix[0].size() -1;
        int rightMatrix = matrix.size() -1;

        while( leftMatrix <= rightMatrix)
        {
            //get middle matrix
            int middleMatrix = leftMatrix + ((rightMatrix - leftMatrix) /2);

            int left{0};
            int right = rowLength;

            while(left <= right)
            {
                int middle = left +((right - left)/2);
                //base case
                if(matrix[middleMatrix][middle] == target){return true;}
                //remove right side
                if(target < matrix[middleMatrix][middle]) {right = middle -1;}
                //remove the left side
                else if(target > matrix[middleMatrix][middle]) {left = middle+1;}
            }
            
            //remove right side of vectors
            if(target < matrix[middleMatrix][0]) {rightMatrix = middleMatrix -1;}
            //remove the left side of vectors
            else if(target > matrix[middleMatrix][rowLength]) {leftMatrix = middleMatrix +1;}
            else{return false;}
        }
        return false;
        
    }
};
