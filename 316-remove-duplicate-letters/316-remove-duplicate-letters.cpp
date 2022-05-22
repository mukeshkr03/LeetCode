class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n = s.size();
        stack<char>st;
        vector<int>f(26,0);
                vector<bool>m(26,false);
        // map<char,int>m;
        for(int i = 0;i<n;i++){
            f[s[i]-'a']++;
            // m[s[i]] = 0;
        }
        for(int i = 0;i<n;i++){
            char x = st.top();
            if(m[s[i]-'a']==true){
                f[s[i]-'a']--;
                continue;
            }
           
                while(!st.empty() && f[st.top()-'a']>0 && s[i]<st.top()){
                    m[st.top()-'a'] = false;
                    st.pop();
                }
            st.push(s[i]);
            f[s[i]-'a']--;
            m[s[i]-'a']=true;
        }
        string ans="";
        while(!st.empty()){//Build answer string
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};