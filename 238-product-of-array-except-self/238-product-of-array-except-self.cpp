class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp1(n);
        vector<int>temp2(n);
        vector<int>temp3(n);
        
        temp1[0] = nums[0];
        for(int i = 1;i<n;i++){
            temp1[i] = temp1[i-1]*nums[i];
        }
        temp2[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--){
            temp2[i] = temp2[i+1]*nums[i];
        }
        
        temp3[0] = temp2[1];
        temp3[n-1] = temp1[n-2];
        
        for(int i = 1;i<n-1;i++){
            temp3[i] = temp1[i-1] * temp2[i+1];
        }
//         for(int i = 0;i<n;i++){
//             cout<<temp1[i]<<" ";
//         }
//         cout<<endl;
        
//         for(int i = 0;i<n;i++){
//             cout<<temp2[i]<<" ";
//         }
//         cout<<endl;
        
//         for(int i = 0;i<n;i++){
//             cout<<temp3[i]<<" ";
//         }
//         cout<<endl;
        return temp3;
    }
};