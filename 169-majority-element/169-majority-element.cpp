class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int index = 0,cnt = 1, n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i] == nums[index]){
                cnt++;
            }
            else if(cnt == 0){
                index = i;
                cnt = 1;
            }
            else{
                cnt--;
            }
            // if(cnt == 0){
            //     index = i;
            //     cnt = 1;
            // }
        }
        // cout<<nums[index]<<endl;
        return nums[index];
    }
};