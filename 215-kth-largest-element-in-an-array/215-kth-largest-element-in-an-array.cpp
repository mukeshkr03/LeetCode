class Solution {
public:
    static int cmp(int a,int b){
        return a>b;
    }
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        for(auto i:nums){
            cout<<i<<" ";
        }
        int ans = 0;
        ans = nums[k-1];
        return ans;
    }
};