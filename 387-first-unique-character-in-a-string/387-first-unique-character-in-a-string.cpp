class Solution {
public:
    int firstUniqChar(string s) {
        int frq[26]={0};
        int index=-1;
        for(int i=0;i<s.length();i++){
            frq[s[i]-'a']++;
        }
        for(int i=0;i<s.length();i++){
           if(frq[s[i] - 'a'] == 1){
               index = i;
               break;
           }
        }
        return index;
    }
};