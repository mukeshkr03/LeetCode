class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i = 0,j = 0;
        vector<int>ans;
        list<int>l;
        while(j<nums.size()){
            while(!l.empty() && l.back()<nums[j]){
                l.pop_back();
            }
            l.push_back(nums[j]);
            
            if(j-i+1 < k){
                j++;
            }
            else{
                if(j-i+1 == k){
                    ans.push_back(l.front());
                    if(l.front() == nums[i]){
                        l.pop_front();
                    }
                    j++;
                    i++;
                }
            }
        }
        return ans;
    }
};

