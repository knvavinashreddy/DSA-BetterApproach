class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int sizeOfRows = matrix.size();
        int sizeOfColumns = matrix[0].size();
        for(int i=0;i< sizeOfRows;i++){
            if(matrix[i][0] <= target && target <= matrix[i][sizeOfColumns - 1]){
                for(int j=0;j< sizeOfColumns;j++){
                    if(matrix[i][j] == target){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};