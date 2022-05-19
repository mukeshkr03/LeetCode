class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
         int sze = arr.size()-1;
        int start = 0,end = sze;
        int mid = start + (end-start)/2;
        while(start<end)
        {
            mid = start + (end-start)/2;
            
            if(arr[mid]<=arr[mid+1])
            {
                start = mid+1;
            }
            else
            {
                end = mid;
            }
            
           // mid = start + (end-start)/2;
        }
        return start;
    }
};