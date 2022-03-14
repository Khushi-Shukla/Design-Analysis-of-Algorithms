// #include<iostream>
// #include<vector>
// #include<list>

// using namespace std;
// const int N=1e5+3;
// vector<int> g[N];
// vector<bool> vis(N);

// list<int> q;

// void bfs(int source){
//     q.push_back(source);
//     while(!q.empty()){
//         int s=q.front();
//         cout<<s<<" ";
//         q.pop_front();
//         vis[source]=true;
//         for(auto a:g[source]){
//             if(!vis[a]){
//                 q.push_back(a);
//                 vis[a]=true;
//             //  bfs(a);
//             }
//         }
//     }
// }


// int main(){
//     int n,m;
//     cout<<"Enter total vertices and edges: ";
//     cin>>n>>m;
//     for(int i=0;i<m;i++){
//         int u,v;
//         cout<<"Enter source vertex destination vertex respectively: ";
//         cin>>u>>v;
//         g[u].push_back(v);  
//         // g[v].push_back(u);
//     }

//     // bfs(1);
//     cout<<"Breadth first Traversal of reachable nodes is: ";
//     bfs(1);
// }


//check if given graph is connected or not using bfs
#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int N=1e5+3;
vector<int> g[N];
vector<int> status(N, 1);
queue<int> q;

void bfs(int source){
    cout<<source<<" ";
    q.push(source);
    status[source]=2;     
    for(auto a:g[source]){
        if(status[a]==1){
            bfs(a);
        }
        
    }
    q.pop();
    status[source]=3;
}



int main(){
    int n,m;
    cout<<"Enter total vertices and edges: ";
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter source vertex destination vertex respectively: ";
        cin>>u>>v;
        g[u].push_back(v);  
        // g[v].push_back(u);
    }
    cout<<"The reachable nodes from source 0 are:\n";
    bfs(0);

}




