//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps = 0, curr_max = 0, curr_reach = 0;
        // if(arr[0] == 0){
        //     return -1;
        // }
        for(int i = 0;i<n-1;i++){
            if(i + arr[i] > curr_max){
                curr_max = i + arr[i];
            }
            
            if(i == curr_reach){
                jumps++;
                curr_reach = curr_max; 
            }
        }
        if(curr_reach < n-1){
            return -1;
        }
        return jumps;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends