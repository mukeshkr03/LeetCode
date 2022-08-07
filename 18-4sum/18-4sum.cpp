class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            for(int j = i+1;j<n;j++){
                for(int k = j+1;k<n;k++){
                   long long x = (long long)target - (long long)nums[i]- (long long)nums[j] - (long long)nums[k]; 
                   
                    if(binary_search(nums.begin()+k+1,nums.end(),x))
                          s.insert({nums[i],nums[j],nums[k],(int)x}); 
                        
                    }
                }
            }
        
     vector<vector<int>>ans(s.begin(),s.end());
        return ans;
    }
};