#include<iostream>
#include<vector>
using namespace std;

const int N=100;
vector<vector<int>> g(N, vector<int> (N, 0));
vector<int> path(N);

bool isSafe(int v, int pos){
    if(g[path[pos-1]][v]==0) return false;
    for(int i=0;i<pos;i++){
        if(path[i]==v){
            return false;
        }
    }
    return true;
}

bool hamCycleUtil(int pos, int n){
    if(pos==n){
        if(g[path[pos-1]][path[0]]==1)
            return true;
        else
            return false;
    }
    for(int v=1;v<n;v++){
        if(isSafe(v, pos)){
            path[pos]=v;
            if(hamCycleUtil(pos+1, n)==true)
                return true;
            path[pos]=-1;
        }
    }
    return false;
}

void printSolution(int n){
    cout<<"The folllowing is one hamiltonian cycle for the given graph\n";
    for(int i=0;i<n;i++){
        cout<<path[i]<<" ";
    }
    cout<<path[0]<<endl;
}

bool hamCyle(int n){
    for(int i=0;i<n;i++){
        path[i]=-1;
    }
    path[0]=0;
    if(hamCycleUtil(1, n)==false){
        cout<<"The given graph does not have a hamiltonain path\n";
        return false;
    }
    printSolution(n);
    return true;
}


int main(){
    int n,m;
    cout<<"Enter total vertices and edges: ";
    cin>>n>>m;
    cout<<"Enter source vertex destination vertex respectively:\n";
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        g[u][v]=1;
        g[v][u]=1;
    }
    hamCyle(n);
    return 0;
}


// #include<iostream>
// #include<vector>
// using namespace std;

// const int N=100;
// vector<vector<int>> g(N, vector<int> (N, 0));
// vector<int> path(N);

// void hamCycle(int n, int pos){
//     do{
//         path[pos]=(path[pos]+1)%(n+1);
//         if(path[pos]==0) return;
//         if(g[path[pos-1]][path[pos]]!=0){
//             int j;
//             for(j=0;j<pos;j++){
//                 if(path[j]==path[pos])
//                 break;
//             }
//             if(j==pos){
//                 if((pos<n|| pos==n) && g[path[n]][path[1]]!=0)
//                     return;
//             }
//         }

//     }while(true);
// }
// void hamCycleUtil(int pos, int n){
//     do{
//         hamCycle(n, pos);
//         if(path[pos]==0)
//             return;
//         if(pos==n)
//             break;
//         else{
//             hamCycleUtil(pos+1, n);
//         }
//     }while(true);
//     for(int i=0;i<n;i++){
//         cout<<path[i]<<" ";
//     }
// }

// void printSolution(int n){
//     cout<<"The folllowing is one hamiltonian cycle for the given graph\n";
//     for(int i=0;i<n;i++){
//         cout<<path[i]<<" ";
//     }
//     cout<<path[0]<<endl;
// }




// int main(){
//     int n,m;
//     cout<<"Enter total vertices and edges: ";
//     cin>>n>>m;
//     cout<<"Enter source vertex destination vertex respectively:\n";
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         g[u][v]=1;
//         g[v][u]=1;
//     }
//     hamCycleUtil(0, n);
//     return 0;
// }