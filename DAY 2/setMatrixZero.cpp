class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         std::vector<std::vector<int>> m2 = matrix;
         int m = matrix.size();
         int n = matrix[0].size();
        int k= m2.size();
        int l =m2[0].size();
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    for(int k=0;k<m;k++){
                        for(int l=0;l<n;l++){
                            m2[i][l]=0;
                           
                        }
                         m2[k][j]=0;
                    }
                }
                
            }
        }
        matrix = m2;
        
    }
};