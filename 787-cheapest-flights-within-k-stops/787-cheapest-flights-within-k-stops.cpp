class Solution {
public:
    
    //dijkstras algorithmn
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>graph(n);
        
        for(auto i:flights){
            graph[i[0]].push_back({i[1], i[2]});
        }
        
        vector<int>dist(n,INT_MAX);
        dist[src] = 0; 
        
        queue<tuple<int,int,int>>pq;
        pq.push({0,src,0});
        
        while(!pq.empty()){
            auto [dis,u,kk] = pq.front();
            pq.pop();
            
            for(auto [v,w] : graph[u]){
                if(dis+w < dist[v] && kk<=k){
                    dist[v] = dis + w;
                    pq.push({dist[v],v,kk+1});
                }
            }
        }
        if(dist[dst] == INT_MAX){
            return -1;
        }
        return dist[dst];
    }
};