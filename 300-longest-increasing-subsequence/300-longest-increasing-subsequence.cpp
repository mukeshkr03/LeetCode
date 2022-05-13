class Solution {
public:
    int lis(int dp[],int i,vector<int>& nums){

        if(dp[i]!=-1) return dp[i];        
        int sol = 1;
        
        for(int j =0;j<i;j++){
            if(nums[j]<nums[i]){
                sol = max(sol,lis(dp,j,nums)+1); 
            }
        }
        return dp[i] = sol;
    }
    int lengthOfLIS(vector<int>& nums) {
       int n = nums.size();
        int dp[n];
        for(int i = 0;i<n;i++){
            dp[i] = 1;
            for(int j = 0;j<i;j++){
                if(nums[j]<nums[i]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp,dp+n);
    }
};