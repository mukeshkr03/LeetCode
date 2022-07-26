class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a[n];
        
        a[0] = nums[0];
        for(int i = 1;i<n;i++){
            int ok = 0;
            for(int j = i-1;j>=0;j--){
                if(nums[i] != nums[j]+1){
                    ok = max(ok,a[j]);
                    // break;
                }
            }
            if(ok){
                a[i] = ok + nums[i];
            }
            else if(ok == 0){
                a[i] = nums[i];
            }
        }
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans,a[i]);
        }
       
        return ans;
    }
};

// 2,2,3,3,3,4
// 2 4 3 6 9  
    
//     2 3 4
//     2 3 6