class Solution {
public:
   vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
       vector<int>ans;
    int i = 0,j = 0;
    list<int>l;
    while(j<nums.size()){
        while(nums[j]>l.back() && !l.empty()){
            l.pop_back();
        }
        l.push_back(nums[j]);

        if(j-i+1<k){
            // l.pb(nums[j]);
            j++;
        }
        else{
            if(j-i+1==k){
                ans.push_back(l.front());
                if(l.front()==nums[i]){
                    l.pop_front();
                }
                i++;j++;
            }
        }
    }
       return ans;
        
    }
};