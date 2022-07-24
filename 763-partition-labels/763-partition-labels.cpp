class Solution {
public:
    vector<int> partitionLabels(string s) {
       int n = s.length();
        vector<int>v(26,0);
        for(int i = 0;i<n;i++){
            v[s[i] - 'a'] = i;
        }
        vector<int>ans;
       
        for(int i = 0;i<n;i++){
            int start = i, end = v[s[start] - 'a'];
            while(start<end){
                end = max(end, v[s[start]-'a']);
                start++;
            }
            ans.push_back(end - i + 1);
            i = end;
            cout<<i<<endl;
        }
        return ans;
    }
};