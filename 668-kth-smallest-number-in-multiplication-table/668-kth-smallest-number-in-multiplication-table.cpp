class Solution {
public:
    int poss(int mid,int n,int m){
        int cnt = 0;
        for(int i = 1;i<=n;i++){
            cnt+= min(m,mid/i);
        }
        return cnt;
    }
    int findKthNumber(int m, int n, int k) {
       int s = 1, e = n*m;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            
            if(poss(mid,n,m) >=k){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return s;
    }
};