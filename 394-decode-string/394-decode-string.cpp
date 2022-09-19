class Solution {
public:
    string ans(string s, int &i){
        string res;
        while(i<s.size() && s[i]!=']'){
            if(isdigit(s[i])){
                int k = 0;
                while(isdigit(s[i]) && i<s.size()){
                    k = k*10 + s[i] - '0';
                    i++;
                }
                i++;
                string r = ans(s, i);
                while(k>0){
                    res+=r;
                    k--;
                }
                i++;
            }
            else{
                res+=s[i];
                i++;
            }
        }
        return res;
    }
    string decodeString(string s) {
        int i = 0;
        return ans(s,i);
    }
};