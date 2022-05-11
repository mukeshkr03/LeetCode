class Solution {
public:
    void findAIsland(vector<vector<int>>& grid,int i,int j,int& ok,map<int,int>&mp,int& cnt){
        if(grid[i][j]==0 || grid[i][j]>1){
            return;
        }
        int n = grid.size();
        grid[i][j]=ok;cnt++;
        if(i>0) findAIsland(grid,i-1,j,ok,mp,cnt);
        if(j>0) findAIsland(grid,i,j-1,ok,mp,cnt);
        if(i<n-1) findAIsland(grid,i+1,j,ok,mp,cnt);
        if(j<n-1) findAIsland(grid,i,j+1,ok,mp,cnt);

    }
    int largestIsland(vector<vector<int>>& grid) {
         int n = grid.size(), m = grid[0].size(),ok = 1;
        map<int,int>mp;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                    int cnt = 0;
                    ok++;
                    findAIsland(grid,i,j,ok,mp,cnt);
                    mp[ok] = cnt;
                }
            }
        }

        int ans = INT_MIN;

        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==0){
                    set<int>s;
                   if(i>0 && grid[i-1][j]>1){
                        if(s.count(grid[i-1][j])==0){
                            s.insert(grid[i-1][j]);
                        }
                    }
                    if(j>0 && grid[i][j-1]>1){
                        if(s.count(grid[i][j-1])==0){
                            s.insert(grid[i][j-1]);
                        }
                    }
                    if(i<n-1 && grid[i+1][j]>1){
                        if(s.count(grid[i+1][j])==0){
                            s.insert(grid[i+1][j]);
                        }
                    }
                    if(j<n-1 && grid[i][j+1]>1){
                        if(s.count(grid[i][j+1])==0){
                            s.insert(grid[i][j+1]);
                        }
                    }

                    int sol = 0;
                    for(auto i:s){
                        sol+=mp[i];
                    }
                    ans = max(ans,sol+1);
                    s.clear();
                }
            }
        }
        if(ans==INT_MIN){
            return n*n;
        }
        return ans;

    }
};