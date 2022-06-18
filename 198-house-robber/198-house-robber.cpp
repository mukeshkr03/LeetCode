class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        // int a[n];
        // a[0] = nums[0], a[1] = nums[1];
        if(n==1){
            return nums[0];
        }
        if(n == 2){
            return max(nums[0], nums[1]);
        }
        if(n>=3){
            for(int i = 2;i<n;i++){
                int x = nums[i];
                for(int j = 0;j<i-1;j++){
                    nums[i] = max(x+nums[j], nums[i]); 
                }
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
