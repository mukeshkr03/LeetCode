class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int>ans;
        set<int>s;
        int ok;
        for(int i = 0;i<nums.size();i++){
            if(s.count(target - nums[i])){
                ans.push_back(i);
                ok = target - nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==ok && i!=ans[0]){
                ans.push_back(i);
                break;
            }
        }
        ans[0]+=1;ans[1]+=1;
        sort(ans.begin(),ans.end());
        return ans;
    }
};