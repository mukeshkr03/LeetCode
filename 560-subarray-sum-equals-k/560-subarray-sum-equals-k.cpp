class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       map<int,int>m;
        m[0] = 1;
        int sum = 0,ans = 0;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int x = (sum-k);
            
            // if(sum == k) ans++;
           if(m.find(x) != m.end()){
                ans += m[x];
            }
            m[sum]++;
        }
        return ans;
    }
};

