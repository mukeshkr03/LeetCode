class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int s = 0, e = n-1, ans = INT_MIN;
        while(s<e){
            int len = e-s, hei = min(height[s], height[e]);
            ans = max(ans, len*hei);
            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return ans;
    }
};