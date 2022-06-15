bool compFunc(const pair<int, string>& p1, const pair<int, string>& p2)
{
    if (p1.first > p2.first)
        return true;
    
    if (p1.first == p2.first)
        return p1.second < p2.second;
    
    return false;
}
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> ht;
        for (auto w : words)
        {
            ht[w]++;
        }
        
        vector<pair<int, string>> vec;
        for (auto [w, c] : ht)
        {
            vec.push_back({c,w});
        }
        sort(vec.begin(), vec.end(), compFunc);
        
        vector<string> ret(k);
        for (int i = 0; i< k; i++)
        {
            ret[i] = vec[i].second;
        }
        
        return ret;
    }
};