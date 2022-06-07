class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int index = nums[0],cnt = 1, n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i] == index){
                cnt++;
            }
            else{
                cnt--;
            }
            if(cnt == 0){
                index = nums[i];
                cnt = 1;
            }
        }
        // cout<<nums[index]<<endl;
        return index;
    }
};