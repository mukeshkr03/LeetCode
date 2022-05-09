class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp = 0,ans = INT_MIN;
        for(int i = 0;i<nums.size();i++){
            temp+=nums[i];
            ans = max(ans,temp);
            // temp+=nums[i];
            if(temp<0){
                temp = 0;
            }
        }
        return ans;
    }
};