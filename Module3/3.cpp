#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
typedef vector<pi> vi;

const int inf=1e7;
void dijkstra(int source, int n, vector<vi> &g, vector<int> &dist){
    priority_queue<pi, vi, greater<pi>> heap;
    dist[source]=0;
    heap.push({0, source});
    while(!heap.empty()){
        auto a=heap.top();;
        heap.pop();
        for(auto it:g[a.second]){
            if(dist[it.first]> dist[a.second]+it.second){
                dist[it.first]=dist[a.second]+it.second;
                heap.push({dist[it.first], it.first});
            }
        }
    }
    cout<<"The shortest paths from node "<<source<<" to other nodes are\n";
    cout<<"Node\tCost from source\n";
    for(int i=1;i<=n;i++){
        if(dist[i]<inf){
            cout<<i<<"\t"<<dist[i]<<"\n";
        }
        else{
            cout<<"-1 ";
        }
    }

}

int main(){
    int n,m, source;
    cout<<"Enter total vertices and edges: ";
    cin>>n>>m;
    vector<vi> g(n+1);
    vector<int> dist(n+1, inf);
    cout<<"Enter source vertex, destination vertex and weight respectively:\n";
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});  
        g[v].push_back({u, w});
    }
    cout<<"Enter source vertex: ";
    cin>>source;
    dijkstra(source, n, g, dist);
    return 0;

}

