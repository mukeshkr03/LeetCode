//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int j = 0;
        int ans = str[0] - '0', negative = 0;
        if(str[0] == '-'){
            ans = str[1] - '0';
            j++;
            if(ans<0 || ans>9){
                return -1;
            }
            negative = 1;
        }
        else{
            if(ans<0 || ans>9){
            return -1;
        }
        }
        for(int i = j+1;i<str.length();i++){
            int ch = str[i] - '0';
            if(ch>9 || ch <0){
            return -1;
            }
            else{
                ans*=10;
                ans+=ch;
            }
        }
        if(negative){
            ans*=-1;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends