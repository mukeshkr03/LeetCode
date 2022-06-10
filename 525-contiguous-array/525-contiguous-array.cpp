class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int>m;
        int sum = 0, n = nums.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(nums[i] == 0){
                nums[i] = -1;
            }
            sum+=nums[i];
            if(sum == 0){
                 ans = max(ans, i+1);  
            }
            else if(m.count(sum)){
                ans = max(ans, i - m[sum]);
            }
            else{
                m[sum] = i;
            }
        }
        return ans;
    }
};