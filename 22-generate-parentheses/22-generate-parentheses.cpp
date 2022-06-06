class Solution {
public:
    vector<string>ans;
        void dfs(int l, int r, string s){
            if(l==0 && r==0){
                ans.push_back(s);
                return;
            }
            
            if(l>0){
                s.push_back('(');
                dfs(l-1,r,s);
                s.pop_back();
            }
             if(r>l){
                s.push_back(')');
                dfs(l,r-1,s);
            }
        }
    vector<string> generateParenthesis(int n) {
        dfs(n,n,"");
        return ans;
    }
};