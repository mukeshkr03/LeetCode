class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ok = -1;
        int  s= 0,e= letters.size();
        while(s<=e){
            int mid = s+(e-s)/2;
            if(letters[mid]>target){
                ok = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
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