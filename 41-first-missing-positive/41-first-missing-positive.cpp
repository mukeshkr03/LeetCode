class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        set<int>s;
        for(int i = 0;i<n;i++){
            s.insert(nums[i]);
        }
        int ans;
        for(int i = 1;i<=n+1;i++){
            if(s.count(i)==0){
                ans = i;
                break;
            }
        }
        return ans;
    }
};