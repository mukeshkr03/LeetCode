//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), fresh = 0;
        queue<pair<int,int>>q;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    fresh++;
                }
                else if(grid[i][j] == 2){
                    q.push({i,j});
                }
            }
        }
        if(fresh == 0){
            return 0;
        }
        int time = 0;
        while(!q.empty()){
            int len = q.size(), temp = 0;
            while(len!=0){
                int x = q.front().first, y = q.front().second;
                q.pop();
                
                if(x >0 && grid[x-1][y] == 1){
                    q.push({x-1,y});
                    grid[x-1][y] = 2;
                    temp++;
                }
                if(y <m-1 && grid[x][y+1] == 1){
                    q.push({x,y+1});
                    grid[x][y+1] = 2;
                    temp++;
                }
                if(x< n-1 && grid[x+1][y] == 1){
                    q.push({x+1,y});
                    grid[x+1][y] = 2;
                    temp++;
                }
                if(y >0 && grid[x][y-1] == 1){
                    q.push({x,y-1});
                    grid[x][y-1] = 2;
                    temp++;
                }
                len--;
            }
            if(temp!=0){
                time++;
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1){
                    time = 0;
                    break;
                }
            }
        }
        return (time ? time : -1);
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends