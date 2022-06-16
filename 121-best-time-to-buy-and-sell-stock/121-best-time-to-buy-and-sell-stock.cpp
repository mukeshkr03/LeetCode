class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int a[n],b[n];
        a[0] = prices[0], b[n-1] = prices[n-1];
        for(int i = 1;i<n;i++){
            a[i] = min(prices[i],a[i-1]);
        }
        
        for(int i = n-2;i>=0;i--){
            b[i] = max(prices[i],b[i+1]);
        }
        
        int ans = 0;
        for(int i = 0;i<n;i++){
            ans = max(ans,b[i] - a[i]);
        }
        return ans;
    }
};