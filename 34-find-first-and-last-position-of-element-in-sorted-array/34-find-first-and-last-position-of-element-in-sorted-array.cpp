class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==target){
                first = i;
                break;
            }
        }
        int last = -1;
        for(int i = nums.size()-1; i>=0;i--){
            if(nums[i]==target){
                last = i;
                                break;

            }
        }
        vector<int>ans;
        if(first!=-1 && last!=-1){
            ans.push_back(first);
            ans.push_back(last);
                            

        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);

        }
        return ans;
    }
};