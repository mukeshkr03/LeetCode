class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0,e = nums.size()-1;
        // int ans = INT_MAX;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]>=target){
                // ans = mid;
                e = mid-1;
            }
            // else if(nums[mid]>)
            else{
                s = mid+1;
            }
        }
        return s;
    }
};