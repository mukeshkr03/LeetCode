class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        cout<<"n "<<n<<endl;
        if(n == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        
        for(auto i:nums){
            cout<<i<<" ";
        }
        cout<<endl;
        
       int maxf=1,curmax=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                
                continue;
            }
            if(nums[i]==nums[i-1]+1)
            {
               curmax++;
                 maxf=max(maxf,curmax);
            }
            else
            { 
                curmax=1;
              maxf=max(maxf,curmax);  
            }
        }
         return maxf;
    }
};