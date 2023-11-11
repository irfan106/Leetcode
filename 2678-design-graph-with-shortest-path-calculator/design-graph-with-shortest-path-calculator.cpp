class Graph {
public:
    Graph(int n, vector<vector<int>>& edges) {
        adj_list.resize(n);
        for (auto& edge : edges) {
            adj_list[edge[0]].push_back({edge[1], edge[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj_list[edge[0]].push_back({edge[1], edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        const int INF = numeric_limits<int>::max();
        vector<int> dist(adj_list.size(), INF);
        dist[node1] = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        pq.push({0, node1});
        while (!pq.empty()) {
            auto [d, u] = pq.top();
            pq.pop();
            if (u == node2) {
                return d;
            }
            if (d > dist[u]) {
                continue;
            }
            for (auto [v, w] : adj_list[u]) {
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }
        return -1;
    }
    private:
    vector<vector<pair<int, int>>> adj_list;
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */