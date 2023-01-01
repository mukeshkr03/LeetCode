//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void solve(string &S, int index, set<string>&st){
	    if(index >= S.size()){
	        st.insert(S);
	        return;
	    }
	    
	    for(int i = index;i<S.size();i++){
	        swap(S[index], S[i]);
	        solve(S, index+1, st);
	        swap(S[index], S[i]);
	    }
	}
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
		    set<string>st;
		    int index = 0;
		    solve(S,index,st);
		    for(auto i:st){
		        ans.push_back(i);
		    }
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends