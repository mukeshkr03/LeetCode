class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int>m;
        vector<int>a(senders.size());
        for(int i = 0;i<messages.size();i++){
            string x = "";
            for(int j = 0;j<=messages[i].length();j++){
                if(messages[i][j]==' ' || j == messages[i].length()){
                    a[i]++;
                }
             }
        }
        for(int i = 0;i<senders.size();i++){
            m[senders[i]]+=a[i];
        }
        string ans = "";
        int aa = 0;
        for(auto i:m){
            if(i.second >= aa){
                ans = i.first;
                aa = i.second;
            }
        }
        // for(auto i:m){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        return ans;
    }
};