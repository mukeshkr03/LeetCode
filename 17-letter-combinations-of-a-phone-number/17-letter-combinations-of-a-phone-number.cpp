class Solution {
public:
    vector<string> letterCombinations(string d) {
        string a[10] = {"","","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"};
        
        vector<string>ans;
            // ans.push_back("");
        if(d.size()==0) return ans;
        
            // vector<string>ans;
            ans.push_back("");
        
            for(char c : d){
                vector<string>temp;
                for(char k : a[c-'0']){
                    for(string x: ans){
                        temp.push_back(x+k);
                    }            
                }
                ans = temp;
            }
        return ans;
    }
};