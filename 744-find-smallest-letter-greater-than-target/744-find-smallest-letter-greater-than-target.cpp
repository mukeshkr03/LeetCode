class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ok = -1;
        for(int i = 0;i<letters.size();i++){
            if(letters[i]>target){
                ok = i;
                break;
            }
        }
        if(ok!=-1){
            return letters[ok];
        }
        else{
            return letters[0];
        }
    }
};