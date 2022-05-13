class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int i = 0,j = 0,ans = 0;
       int kk = k;
       while(j<nums.size()){
        if(nums[j]==0){
            kk--;
        }

        if(kk>=0){
            ans = max(ans,j-i+1);
            j++;
                
        }
        
        else if(kk<0){
            while(kk<0){
                if(nums[i]==0){
                    kk++;
                }
                i++;
            }
                j++;
            }
       }
       return ans;
    }
};