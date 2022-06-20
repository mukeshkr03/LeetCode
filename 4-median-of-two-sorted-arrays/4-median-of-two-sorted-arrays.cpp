class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(auto i:nums2){
            nums1.push_back(i);
        }
        
        sort(nums1.begin(), nums1.end());
        double ans = nums1[(nums1.size())/2]; 
        if(nums1.size() % 2 == 0){
            double x = nums1[(nums1.size())/2], y = nums1[(nums1.size())/2 - 1]; 
            ans = (x+y)/2;
            double z = (x+y)/2;
        }
        return (ans);
    }
};