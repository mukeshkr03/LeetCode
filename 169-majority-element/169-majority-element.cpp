class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int index = 0,cnt = 1, n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i] == nums[index]){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt == 0){
                index = i;
                cnt = 1;
            }
        }
        return nums[index];
    }
};