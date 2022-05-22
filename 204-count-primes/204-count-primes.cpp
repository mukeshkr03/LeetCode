class Solution {
public:
    int countPrimes(int n) {
        vector<bool>v(n+1,1);
        if(n<=2) return 0;
        int cnt = 1;
        v[0] = v[1] = 0;
        v[2] = 1;
        // for(int i = 4;i<n;i+=2){
        //     v[i] = 0;
        // }
        for(int i = 3;i<n;i+=2){
            if(v[i]==1) cnt++;
            for(int j = 2*i; j<n;j+=i){
                v[j] = 0;
            }
        }
        return cnt;
    }
};