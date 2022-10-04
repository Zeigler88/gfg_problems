# include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<pair<int, int>>> graph = {
        {{1, 7}, {3, 8}}, 
        {{0, 7}, {2, 6}, {3, 3}}, 
        {{1, 6}, {3, 4}, {4, 2}, {5, 5}}, 
        {{0, 8}, {1, 3}, {2, 4}, {4, 3}}, 
        {{2, 2}, {3, 3}, {5, 2}}, 
        {{2, 5}, {4, 2}}
    };
    set<pair<int, int>> s;
    vector<bool> visited(graph.size(), 0);
    int src = 0;
    visited[src] = 1;
    for(int i = 0; i < graph[src].size(); i++) {
        s.insert({graph[src][i].second, graph[src][i].first});
    }
    int cost = 0;
    while(!s.empty()) {
        auto x = *(s.begin());
        s.erase(x);
        if(visited[x.second] == 0) {
            visited[x.second] = 1;
            cost += x.first;
            cout<<x.second<<" "<<x.first<<endl;
            for(int i = 0; i < graph[x.second].size(); i++) {
                s.insert({graph[x.second][i].second, graph[x.second][i].first});
            }
        }
    }
    cout<<cost<<endl;
}