class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int temp = (n*(n+1))/2;
        // cout<<n<<endl;
        // cout<<temp<<endl;
        for(int i = 0;i<n;i++){
            temp-=nums[i];
        }
        return temp;
    }
};