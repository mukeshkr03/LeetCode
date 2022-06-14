class Solution {
public:
    int strStr(string haystack, string needle) {
        char x = needle[0];
        string ans;
        vector<pair<string,int>>sol;
        for(int i = 0;i<haystack.length();i++){
            if(x==haystack[i]){
                string ans = haystack.substr(i,needle.length());
                sol.push_back({ans,i});
                ans = "";
            }
        }
        for(auto i:sol){
            // cout<<i.first<<" ";
            if(i.first == needle){
                return i.second;
            }
        }
        // cout<<endl;
        return -1;
    }
};