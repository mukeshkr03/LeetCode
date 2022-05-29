class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long>a[n+1];
        // a[0] = 0;
        for(auto i:roads){
            a[i[0]].push_back(i[1]);
            a[i[1]].push_back(i[0]);
        }
        vector<long long>ans(n+1,0);
        // ans[0] = 0;
        for(int i = 0;i<=n;i++){
            ans[i] = (a[i].size());
        }
        long long sol = 0;
        sort(ans.begin(),ans.end());
        
        for(int i = 1;i<=n;i++){
            sol+=i*ans[i];
        }
        // for(int i = 0;i<=n;i++){
        //     cout<<ans[i]<<" ";
        // }
        // cout<<endl;
        // for(int i = 0;i<=n;i++){
        //     cout<<a[i].size()<<" ";
        // }
        // cout<<endl;
        return sol;
    }
};