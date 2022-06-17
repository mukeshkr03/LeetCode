class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int>a(n,INT_MAX);
        a[0] = 0;
        for(int i = 1;i<n;i++){
            for(int j = 0;j<i;j++){
                if(i<=j+nums[j]){
                    a[i] = min(a[i],a[j]+1);
                }
            }
        }
        return a[n-1];
    }
};