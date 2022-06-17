class Solution {
public:
    string longestPalindrome(string s) {
        int max_len = 0, n = s.length();
        string str = "";
        for(int i = 0;i<n;i++){
            for(int j = 0; i-j>=0 && i+j <n;j++){
                if(s[i-j] != s[i+j]){
                    break;
                }
                
                int len = 2*j + 1;
                if(len > max_len){
                    max_len = len;
                    str = s.substr(i-j,len);
                }
            }
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 1; i-j + 1>=0 && i+j <n;j++){
                if(s[i-j + 1] != s[i+j]){
                    break;
                }
                
                int len = 2*j;
                if(len > max_len){
                    max_len = len;
                    str = s.substr(i-j + 1,len);
                }
            }
        }
        return str;
    }
};