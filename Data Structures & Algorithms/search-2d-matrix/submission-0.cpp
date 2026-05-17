class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int rowLength = matrix[0].size() -1; //get row length
        int lowRow = 0;
        int highRow = matrix.size() -1;

        while( lowRow <= highRow){
            int midRow = lowRow + ((highRow - lowRow) /2);
            int i{0};
            while( i < matrix[midRow].size())
            {
                if(matrix[midRow][i] == target) { return true;}
                i++;
            }
            //remove right side
            if( target < matrix[midRow][0]) {highRow =  midRow -1;}
            //remove the left side
            else if(target > matrix[midRow][rowLength] ) { lowRow = midRow +1;}
            else{return false;}
            
        }
        return false;
    }
};
