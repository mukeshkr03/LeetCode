class Solution {
public:
    bool dfs(vector<vector<int>>& image, int i , int j, int target,int &x){
        int n = image.size(),m = image[0].size();
        if(image[i][j]==target) return 0;
        image[i][j] = target;
        if(i>0 && image[i-1][j]==x) dfs(image,i-1,j,target,x);
        if(i<n-1 && image[i+1][j]==x) dfs(image,i+1,j,target,x);
        if(j>0 && image[i][j-1]==x) dfs(image,i,j-1,target,x);
        if(j<m-1 && image[i][j+1]==x) dfs(image,i,j+1,target,x);
        return 0;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size(),m = image[0].size();
        // for(int i = 0;i<n;i++){
        //     for(int j = 0;j<m;j++){
        //       if(image[i][j] == target){
        int x = image[sr][sc];
                  dfs(image,sr,sc,newColor,x);
              // }  
            // }
        // }
        return image;
    }
};