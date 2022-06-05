class Solution {
public:
   
 vector<vector<int>> threeSum(vector<int>& num) {
     int n = num.size();
     vector<vector<int>>ans;
     sort(num.begin(),num.end());
     for(int i = 0;i<n-2;i++){
        if(i==0 || (num[i]!=num[i-1] && i>0)){
            int j = i+1,k = n-1;
            while(j<k){
                if(num[j] + num[k] == 0 - num[i]){
                ans.push_back({num[i],num[j],num[k]});
                    j++;k--;
                
                    
                    while(num[j]==num[j-1] && j<k){
                        j++;
                    }
                    
                    while(num[k]==num[k+1] && j<k){
                        k--;
                    }
                }
                    
                    else if(num[j] + num[k] < 0 - num[i]){
                        j++;
                    }
                    else{
                        k--;
                    }
            
            }
        }    
     }
        return ans;
    }
};