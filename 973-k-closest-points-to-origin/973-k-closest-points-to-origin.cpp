class Solution {
public:
    static bool compare(vector<int>a, vector<int>b){
        double x = a[0]*a[0] + a[1]*a[1];
        double y = b[0]*b[0] + b[1]*b[1];
        return x<y;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), compare);
        return vector<vector<int>>(points.begin(),points.begin()+k);
    }
};