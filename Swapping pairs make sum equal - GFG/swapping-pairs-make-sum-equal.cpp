//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	int findSwapValues(int A[], int n, int B[], int m)
	{
        unordered_set<int>s;
        int sum1 = 0, sum2 = 0, ans = -1;
        for(int i = 0;i<n;i++){
            sum1 += A[i];
        }
        for(int i = 0;i<m;i++){
            sum2 += B[i];
            s.insert(B[i]);
        }
        // if(sum1 == sum2){
        //     return 1;
        // }
        // cout<<sum1<<" "<<sum2<<endl;
        
        // a-ai+bi = b - bi + ai
        for(int i = 0;i<n;i++){
            if((sum2 - sum1)%2 == 0  && s.count((sum2 - sum1)/2 + A[i])){
                return 1;
            }
        }
        return -1;
        
        // 15 + 2*b[i] = 2*a[i];
        
	}
 

};

//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<m;i++)
            cin>>b[i];
        

        Solution ob;
        cout <<  ob.findSwapValues(a, n, b, m);
	    cout << "\n";
	     
    }
    return 0;
}






// } Driver Code Ends