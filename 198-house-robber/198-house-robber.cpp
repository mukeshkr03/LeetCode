class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
            for(int i = 2;i<n;i++){
                int x = nums[i];
                for(int j = 0;j<i-1;j++){
                    nums[i] = max(x+nums[j], nums[i]); 
                }
            }
        int ans = INT_MIN;
        for(auto i:nums){
            ans = max(ans,i);
        }
        // cout<<endl;
        return ans;
    }
};
