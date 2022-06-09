class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int s = 0, e = n - 1;
        // if(nums[0] <= nums[e]){
        //     return e;
        // }
        while(s<=e){
            int mid = s+(e-s)/2;
            if(s == e){
                return s; 
            }
            // if(nums[mid]>=nums[mid - 1] && nums[mid] >= nums[mid + 1]){
            //     return mid;
            // }
            if(nums[mid] > nums[mid + 1]){
                e = mid;
            }
            else{
                s = mid + 1;
            }
        }
        return s;
    }
};