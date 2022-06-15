class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& I) { 
        sort(I.begin(),I.end());
        vector<int>v;
        int start = I[0][0];
        int end = I[0][1];
        
        
        for(int i = 1;i<I.size();i++){
            if(I[i][0] >= start && I[i][1]<=end){
                continue;
            }
            else if(I[i][0]<=end){
                end = I[i][1];
            }
            else{
                v.push_back(start);
                v.push_back(end);
                start = I[i][0];
                end = I[i][1];
            }
            // else{
            //     v.push_back(I[i-1][1]);
            //     v.push_back(I[i][0]);
            // }
        }
        v.push_back(start);
        
        v.push_back(end);
        
        int i = 0,j =0;
        
        vector<vector<int>>ans(v.size()/2);
        
        while(i<v.size()){
            ans[j].push_back(v[i]);
            ans[j].push_back(v[i+1]);
            i+=2;j++;
        }
        return ans;
    }
};