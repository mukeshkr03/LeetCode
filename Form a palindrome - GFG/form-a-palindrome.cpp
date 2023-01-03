//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string str){
        string temp = str;
        reverse(temp.begin(), temp.end());
        int n = str.length();
        int dp[n+1][n+1], ans = 0;
        memset(dp,0, sizeof(dp));
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=n;j++){
                if(str[i-1] == temp[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                    ans = max(ans, dp[i][j]);
                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return n - ans;
    }
};




//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}


// } Driver Code Ends