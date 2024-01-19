class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0;
        int j=(n-1);
        bool res = false;
        while(i<m && j>=0){
            if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]==target){
              res = true;
              break;  
            }
            else if(matrix[i][j]<target){
                i++;
            }
            else
            {
                j--;
            }

        }
        return res;
    }
};


// flaten 2d into 1d and BS
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low =0, high = (m*n)-1 ;
        while(low<=high)
        {
           int  mid = (low+high)/2;
            int row = mid/n;
            int col = mid%n;
            if(matrix[row][col] == target){
                return true;
            }
            else if(matrix[row][col]<target){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return false;
        
    }
};