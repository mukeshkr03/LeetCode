class Solution {
public:
    static bool cmp(vector<int>v1, vector<int>v2){
        return v1[1]<v2[1];
    }
        
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        int n = startTime.size();
        vector<vector<int>>v(n);
        for(int i = 0;i<n;i++){
            v[i] = {startTime[i],endTime[i],profit[i]};
        }
        sort(v.begin(),v.end(),cmp);
        
        int dp[n];
        dp[0] = v[0][2];
        for(int i = 1;i<n;i++){
            int s = 0, e = i-1;
            int inc = v[i][2];
            int get = -1;
            while(s<=e){
                int mid = s + (e - s)/2;
                if(v[mid][1]<=v[i][0]){
                   s = mid + 1;
                    get = mid;
                }
                else{
                   e = mid - 1;
                }
            }
            if(get != -1){
                inc += dp[get];
            }
            dp[i] = inc;// if taken
            
                dp[i] = max(dp[i],dp[i-1]); // if taken or if not taken
        }
        return dp[n-1];
    }
};