class Solution {
public:
    string longestPalindrome(string s) {
        int best_length = 0;
        string best_string = "";
        int n = s.length();
        
        for(int i = 0;i<n;i++){
            for(int j = 0;i-j>=0 && j+i<n;j++){
                if(s[i-j]!=s[i+j]){
                    break;
                }
                else{
                    int len = 2*j + 1;
                    if(len>best_length){
                        best_length = len;
                        best_string = s.substr(i-j,len);
                    }
                }
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 1;i-j+1>=0 && j+i<n;j++){
                if(s[i-j+1]!=s[i+j]){
                    break;
                }
                else{
                    int len = 2*j;
                    if(len>best_length){
                        best_length = len;
                        best_string = s.substr(i-j+1,len);
                    }
                }
            }
        }
        return best_string;
        
    }
};