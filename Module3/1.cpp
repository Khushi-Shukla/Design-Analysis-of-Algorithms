//check if given graph is connected or not using dfs
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

const int N=1e5+3;
vector<int> g[N];
vector<int> status(N, 1);
stack<int> st;

void dfs(int source){
    st.push(source);
    status[source]=2;     
    for(auto a:g[source]){
       
        if(status[a]==1){
            dfs(a);
        }
        
    }
    st.pop();
    status[source]=3;
}

bool isConnected(int n){
    for(int i=0;i<n;i++){
        if(status[i]!=3){
           return false;
        }
    }
    return true;
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

    dfs(0);
    if(isConnected(n)){
        cout<<"The graph is connected\n\n";
    }
    else{
        cout<<"The graph is not connected\n\n";

    }

}




