class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>a(2);
        int ok = 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(nums[i]+nums[j] == target && j!=i)
                {
                    a[0]=i;
                    a[1]=j;
                    ok = 1;
                    break;
                }
            }
            if(ok==1){
                break;
            }
        }
        return a;
    }
};