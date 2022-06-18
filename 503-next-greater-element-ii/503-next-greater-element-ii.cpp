class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        stack<int>st;
        st.push(nums[n-1]);
        for(int i = n-2;i>=0;i--){
            while(st.size()>0 && st.top()<nums[i]){
                st.pop();
            }
            st.push(nums[i]);
        }
        
        for(int i = n-1;i>=0;i--){
            while(st.size()>0 && st.top()<=nums[i]){
                st.pop();
            }
            if(st.size()==0){
                ans.push_back(-1);  
                st.push(nums[i]);
            }
            else{
                ans.push_back(st.top());
                st.push(nums[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
