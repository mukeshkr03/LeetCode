class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int n = words.size(),m = order.length();
        map<char,int>mp;
        for(int i = 0;i<m;i++){
            mp[order[i]] = i;
        }
        
        for(int i = 0;i<words.size();i++){
            string ans = "";
            for(int j = 0;j<words[i].length();j++){
                // i[j] = mp[i[j]];
                ans+=mp[words[i][j]];
            }
            words[i] = ans;
        }
        
        // for(auto i:mp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        // cout<<endl;
        
        for(int i = 0;i<n-1;i++){
            if(words[i]>words[i+1]){
                return false;
            }
        }
        return true;
    }
};

