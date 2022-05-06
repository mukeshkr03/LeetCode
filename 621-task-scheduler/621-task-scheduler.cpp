class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>v(26);
        for(auto i:tasks){
            v[i-'A']++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans = (v[0]-1)*n;
        for(int i = 1;i<26;i++){
            ans-= min(v[0]-1,v[i]);
        }
        return tasks.size() + max(0,ans);
    }
};