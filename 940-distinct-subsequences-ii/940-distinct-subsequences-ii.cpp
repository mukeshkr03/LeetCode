class Solution {
public:
    int distinctSubseqII(string s) {
        int n = s.length();
        int a[n+1];
        a[0] = 1;
        map<int,int>m;
        int mod=1e9+7;
        
        for(int i = 1;i<=n;i++){
            a[i] = (2*a[i-1])%mod;
            
            if(m.count(s[i-1])){
                int pre = m[s[i-1]]-1;
                a[i]-= a[pre];
                (a[i])%= mod;
            }
            
            m[s[i-1]] = i;
        }
        return (a[n]+mod-1)%mod;
    }
};