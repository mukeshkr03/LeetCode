class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& candidates,vector<int>&temp,int target, int i){
        
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(target<0){
            return;
        }
        
        if(i == candidates.size()){
            return;
        }
        
        solve(candidates,temp,target,i+1);
        temp.push_back(candidates[i]);
        solve(candidates,temp,target - candidates[i],i);
        temp.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        solve(candidates,temp,target,0);
        temp.pop_back();
        return ans;
    }
};