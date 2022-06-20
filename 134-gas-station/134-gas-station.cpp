class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int needed = 0, n = gas.size(), have = 0;
        for(int i = 0;i<n;i++){
            needed+=cost[i];
            have+=gas[i];
        }
        if(have<needed){
            return -1;
        }
        
        int ans = 0, index = 0, value = 0;
        for(int i = 0;i<n;i++){
           value += gas[i] - cost[i];
           if(value < 0){
               value = 0;
               index = i+1;
           }
        }
        return index;
    }
};