class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int s = 0,e = n-1,ans = 0;
         if(nums[0]<=nums[n-1]){
                return nums[0];
            }
        while(s<=e){
            int mid = s+(e-s)/2;
            // if(s == e){
            //     return nums[s];
            // }
            if(nums[mid] > nums[mid + 1]){
                return nums[mid+1];
            }
            if(nums[mid] < nums[mid + 1] && nums[mid] < nums[mid - 1]){
                return nums[mid];
            }
            if(nums[mid] > nums[s]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        return ans;
    }
};