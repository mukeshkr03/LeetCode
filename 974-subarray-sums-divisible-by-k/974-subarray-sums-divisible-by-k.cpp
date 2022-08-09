class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
      int n = nums.size();
      map<int,int>m;
      m[0] = 1;
        int sum = 0, sol = 0;
        for(int i = 0;i<n;i++){
            sum+=nums[i];
            int x = sum%k;
            if(x<0){
                x+=k;
            }
            if(m.count(x)){
                sol+=m[x];
                m[x]++;
            }
            else{
                m[x]++;
            }
        }
        return sol;
    }
};

// (9-x)%5 == 0