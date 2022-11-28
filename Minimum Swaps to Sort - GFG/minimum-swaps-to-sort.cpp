//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    vector<int>sorted_nums(nums.begin(), nums.end());
	    sort(sorted_nums.begin(),sorted_nums.end());
	    map<int,int>mp;
	    for(int i = 0;i<nums.size();i++){
	        mp[nums[i]] = i;
	    }
	    int ans = 0;
	    for(int i = 0;i<sorted_nums.size();i++){
	        if(sorted_nums[i]!=nums[i]){
	            ans++;
	            int idx = mp[sorted_nums[i]];
	            mp[nums[i]] = idx;
	            swap(nums[i], nums[idx]);
	        }
	    }
	    return ans;
	}
};
// 3, 19, 6, 10, 5  7
// 3    5  6  7 10  19

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends