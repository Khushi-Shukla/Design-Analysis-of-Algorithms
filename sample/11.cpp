#include<iostream>
#include<vector>
#include<utility>
#include<queue>
#include<stack>

using namespace std;
const int N=1000;
vector<vector<int>> g(N, vector<int>(N));
queue<int> st;
vector<int> status(N, 1);

void dfs(int source){
    st.push(source);
    cout<<source<<" ";
    status[source]=2;
    for(auto a: g[source]){
        if(status[a]==1){
            dfs(a);
        }
    }
    st.pop();
    status[source]=3;
}



int main(){
    int n, m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(0);
    return 0;
}