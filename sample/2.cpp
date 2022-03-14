#include<iostream>
#include<vector>
using namespace std;
const int n=100, inf=999;
vector<vector<int>> g(n, vector<int>(n, inf));


int main(){
    int v,m, source, dest;
    
    cout<<"enter v m source dest";
    cin>>v>>m>>source>>dest;
    for(int i=1;i<v+1; i++){
        g[i][i]=0;
    }
    for(int i=1;i<=m;i++){
        int u,ve,w;
        cin>>u>>ve>>w;
        g[u][ve]=w;
    }
    

    vector<vector<int>> ans=g;
    for(int k=1;k<=v;k++){
        for(int i=1;i<=v;i++){
            for(int j=1;j<=v;j++){
                if(ans[i][j]>ans[i][k]+ans[k][j] && ans[i][k]!=inf && ans[k][j]!=inf){
                    ans[i][j]=ans[i][k]+ans[k][j];
                }
            }
        }
    }
    cout<<ans[source][dest]+ans[dest][source];
    return 0;
}