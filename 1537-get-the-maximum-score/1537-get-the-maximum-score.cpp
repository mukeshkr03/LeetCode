class Solution {
public:
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        long long a = 0, b = 0;
        long long ans = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                a+=nums1[i];
                i++;
            }
            else if(nums1[i]>nums2[j]){
                b+=nums2[j];
                j++;
            }
            else{
                ans+=max(a,b) + nums1[i];
                a = 0,b = 0;
                i++;j++;
            }
        }
        if(i<nums1.size()){
            for(int x = i;x<nums1.size();x++){
                a+=nums1[x];
            }
        }
         if(j<nums2.size()){
            for(int x = j;x<nums2.size();x++){
                b+=nums2[x];
            }
        }
        ans+=(max(a,b))%1000000007;
        return ans%1000000007;
    }
};