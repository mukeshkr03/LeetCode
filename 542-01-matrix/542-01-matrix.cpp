class Solution {
public:
    int MAX = 20000;
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size(), m = mat[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j] == 1){
                    int top = (i<1 ? MAX : mat[i-1][j]);
                    int left = (j<1 ? MAX : mat[i][j-1]);
                    mat[i][j] = 1 + min(top, left);
                }
            }
        }
        
        for(int i = n-1;i>=0;i--){
            for(int j = m-1 ;j>=0;j--){
                if(mat[i][j] != 0){
                    int right = (j>=m-1 ? MAX : mat[i][j+1]);
                    int bottom = (i>=n-1 ? MAX : mat[i+1][j]);
                    mat[i][j] = min(mat[i][j], min(right,bottom) + 1);
                }
            }
        }
        return mat;
    }
};