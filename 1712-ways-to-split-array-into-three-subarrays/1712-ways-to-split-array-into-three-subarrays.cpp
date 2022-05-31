
class Solution {
public:
    int m = 1000000007;
    int waysToSplit(vector<int>& nums) {
        int n = nums.size();
        for(int i = 1;i<n;i++){
            nums[i]+=nums[i-1]; 
        }
        
        int ans = 0;
        for(int i = 0;i<n-1;i++){
            int start = lower_bound(nums.begin()+i+1,nums.end()-1,2*nums[i])-nums.begin();
            
            int end = upper_bound(nums.begin()+i+1,nums.end()-1,(nums[n-1]+nums[i])/2)-nums.begin()-1;
            
            ans = (ans+ max(0,end-start+1))%m;
            // ans=ans%mod;
        }
        return ans;
    }
};