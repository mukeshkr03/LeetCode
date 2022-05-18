class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j = 0;
        int ans = 0;
        map<char,int>m;
        
        while(j<s.size()){
            if(m[s[j]]==0){
                m[s[j]]++;
                ans = max(ans,j-i+1);
                j++;

            }
            else{
                while(m[s[j]]!=0){ 
                    m[s[i]]--;
                    i++;   
                }
            }
        }
        return ans;
    }
};