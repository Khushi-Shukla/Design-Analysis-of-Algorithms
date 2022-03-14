//Graph coloring
#include<iostream>
#include<vector>
using namespace std;

const int N=100;
vector<int> g[N];
// vector<vector<int>> g(N, vector<int> (N,0));

void graphColoring(int n){
    vector<int> color(n, -1); vector<bool> colorUsed(false, -1);
    color[0]=0;
    
    for(int u=1;u<n;u++){
        for(auto a=g[u].begin();a!=g[u].end();a++){
            if(color[*a]!=-1){
                colorUsed[color[*a]]=true;
            }
        }

        int col=0;
        for(col=0;col<n;col++){
            if(colorUsed[col]==false){
                break;
            }
        }
        color[u]=col;
        for(auto a=g[u].begin();a!=g[u].end();a++){
            if(color[*a]!=-1){
                colorUsed[color[*a]]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Node "<<i<<" is assigned color "<<color[i]<<endl;
    }
}


int main(){
    int n,m;
    cout<<"Enter total vertices and edges: ";
    cin>>n>>m;
    cout<<"Enter source vertex destination vertex respectively:\n";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u].push_back(v);  
        g[v].push_back(u);
    }

   
    graphColoring(n);
}