class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        int b = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        if(binary_search(nums.begin(),nums.end(),target)){
            return {a,b-1};
        }
        else{
            return {-1,-1};
        }
    }
};