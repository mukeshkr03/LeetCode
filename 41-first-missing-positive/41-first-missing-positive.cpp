class Solution {
public:
    int firstMissingPositive(vector<int>& num) {
        int n = num.size();
        for(int i = 0;i<n;i++){
            if(num[i]<0){
                num[i] = 0;
            }
        }
        for(int i = 0;i<n;i++){
            int val = abs(num[i]);
            if(val>0 && val<=num.size()){
               if(num[val-1]>0){
                    num[val-1]*=-1;   
               }
                else if(num[val-1]==0){
                    num[val-1] =-1*(num.size()+1);  
                }
            }
        }
        for(int i = 1;i<=n;i++){
            if(num[i-1]>=0){
                return i;
            }
        }
        return n+1;
    }
};