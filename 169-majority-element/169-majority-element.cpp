class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        int ans = 0;
        for(auto i:m){
            if(i.second > n/2){
                ans = i.first;
                break;
            }
            // cout<<i.second<<" ";
        }
        // cout<<endl;
        return ans;
    }
};