class Solution {
public:
    bool isValid(vector<int>& nums, int d, int mid){
        int sum = 0,day = 1;
        for(int i = 0;i<nums.size();i++){
            if(sum+nums[i] <= mid){
                sum+=nums[i];
            }
            else{
                sum = 0;
                day++;
                sum+=nums[i];
            }
        }
        return day<=d; 
    }
    int splitArray(vector<int>& nums, int m) {
        int left = 0, right = 25000001;
        for(int i = 0;i<nums.size();i++){
            left = max(left,nums[i]);
        }
        int mid;
        
        while(left<=right){
            mid = left + (right - left)/2;
            
            if(isValid(nums,m,mid)){
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        
        return left; 
    }
};