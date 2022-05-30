class Solution {
public:
    static int com(vector<int>a, vector<int>b){
        return b[1]<a[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),com);
        // for(auto i:boxTypes){
        //     cout<<i[0]<<" "<<i[1]<<endl;
        // }
        int ans = 0,items = 0;
        for(auto i:boxTypes){
            if(i[0]<truckSize){
                ans+=i[0]*i[1];
                truckSize-=i[0];
            }
            else{
                ans+=truckSize*i[1];
                break;
            }
        }
        return ans;
    }
};