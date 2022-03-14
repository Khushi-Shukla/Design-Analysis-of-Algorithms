#include<iostream>
#include<vector>
#include<set>
#include <typeinfo>
using namespace std;
const int N=1e5+3;
vector<vector<int>> g[N];
int cost;
vector<int> vis(N),parent(N), dist(N);
const int INF=1e9;


void primsMST(int source){
    for(int i=0;i<N;i++){
        dist[i]=INF;
    }
    set<vector<int>> s;
    //{wt, vertex}
    s.insert({0, source});
    while(!s.empty()){
        vector<int> x=*(s.begin());
        s.erase(x);
        vis[x[1]]=true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        cout<<u<<" "<<v<<" "<<w<<"\n";
        cost+=w;

        for(vector<int> it:g[x[1]]){
            if(vis[it[0]])
                continue;
            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]], it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]]=x[1];
            }
        }

    }
}

int main(){
    int n,m;
    cout<<"Enter total vertices and edges: ";
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cout<<"Enter source vertex destination vertex and weight respectively: ";
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<g[i].size();j++){
    //         for(int k=0;k<g[i][j].size();k++)
    //             cout<<g[i][j][k]<<" ";
    //         cout<<endl;
    //     }
    //     cout<<endl;
    // }
    primsMST(0);
    cout<<"Minimum cost is "<<cost<<endl;
    return 0;
}
