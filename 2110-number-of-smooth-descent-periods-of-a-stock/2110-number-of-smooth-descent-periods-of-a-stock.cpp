class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        if(prices.size()==1){
            return 1;
        }
        long long cnt = 1,n = prices.size();
        long long ans = 0;
        vector<long long>v;
        for(int i = 1;i<n;i++){
            if(prices[i-1] - prices[i] == 1){
                cnt++;
            }
            else{
                v.push_back(cnt);
                cnt = 1;
            }
        }
        v.push_back(cnt);
        for(auto i:v){
            if(i==1){
                ans++;
            }
            else{
                ans+=i*(i+1)/2;
            }
        }
        
        return ans;
    }
};