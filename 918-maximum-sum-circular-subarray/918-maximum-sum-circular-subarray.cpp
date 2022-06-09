class Solution {
public:
    long long max(long long a, long long b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        long long ans = 0, temp = INT_MIN, n = nums.size();
        long long temp2 = INT_MAX, ans2 = 0;
        
        long long sum = 0;
        for(int i = 0;i<n;i++){
            ans+=nums[i];
            ans2+=nums[i];
            
            sum+=nums[i];
            temp = max(ans,temp);
            temp2 = min(ans2,temp2);
            
            if(ans<0){
                ans = 0;
            }
            if(ans2>0){
                ans2 = 0;
            }
        }
        
        // cout<<temp2<<endl;
        
        long long sol = temp < 0 ? temp : max(temp,sum - temp2);
        return sol;
    }
};

