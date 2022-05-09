class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = -1,b = -1;
        int s = 0,e = nums.size()-1;
        int mid = s+(e-s)/2;
        while(s<=e){
            mid = s+(e-s)/2;
            if(nums[mid] == target){
                a = mid;
                e = mid-1;
                // continue;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        
        int s1 = 0,e1 = nums.size()-1;
        int mid1 = s1+(e1-s1)/2;
        while(s1<=e1){
            mid1 = s1+(e1-s1)/2;
            if(nums[mid1] == target){
                b = mid1;
                s1 = mid1+1;
                // continue;
            }
            else if(nums[mid1]<target){
                s1 = mid1+1;
            }
            else{
                e1 = mid1-1;
            }
        }
        
        return {a,b};
        
        
    }
};