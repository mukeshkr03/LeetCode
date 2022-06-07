class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int index1 = INT_MIN,index2 = INT_MIN, cnt1 = 0,cnt2 = 0, n = nums.size();
        vector<int>ans;
        for(int i = 0;i<n;i++){
            if(nums[i] ==  index1){
                cnt1++;
            }
            else if(nums[i] == index2){
                cnt2++;
            }
            else if(cnt1 == 0){
                index1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                index2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
            // if(cnt == 0){
            //     index = i;
            //     cnt = 1;
            // }
            int ans1 = 0,ans2 = 0;
            // if(cnt1 >0){
                for(int i = 0;i<n;i++){
                    if(nums[i] == index1){
                        ans1++;
                    }
                }
            // }
            if(ans1>n/3){
                ans.push_back(index1);
            }
            
            // if(cnt2 >0){
                for(int i = 0;i<n;i++){
                    if(nums[i] == index2){
                        ans2++;
                    }
                }
            // }
            if(ans2>n/3){
                ans.push_back(index2);
            }
            return ans;  
        }
        // cout<<nums[index]<<endl 
};