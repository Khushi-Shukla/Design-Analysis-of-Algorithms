#include<bits/stdc++.h>
using namespace std;

// vector<pair<int, int>> t;

int ways(vector<vector<char>> &a, int row, int col, int i, int j){
    // if((i==row-1) && (j==col-1)){
    //     //  t.push_back({i, j});
    //     // ans.push_back(t);
    //     // t.clear();
    //     return 1;
    //     // ans.size();
    // }

    // if(i==row || j==col || a[i][j]=='*')
    //     return 0;

    // // if(isSafe(i, j, a, row, col)){
    //     // t.push_back({i, j});
    //     return ways(a, row, col, i+1, j)+ways(a, row, col, i,j+1);
    // // }
    
    vector<vector<int>> ans(row, vector<int>(col,0));
    ans[0][0]=1;
    for(int i=1;i<col;i++){
        if(a[0][i]=='.'){
            ans[0][i]=ans[0][i-1];
        }
    }

    for(int i=1;i<row;i++){
        if(a[i][0]=='.'){
            ans[i][0]=ans[i-1][0];
        }
    }

    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(a[i][j]=='.'){
                ans[i][j]=ans[i-1][j]+ans[i][j-1];
            }
        }
    }
   
    return ans[row-1][col-1];
}

int main(){
    vector<vector<char>> arr={
        {'.','.','.'},
        {'.','*','.'},
        {'.','.','.'},
        };
    
cout<<ways(arr, 3, 3, 0, 0);
//ans.size()<<endl;
    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j].first<<" "<<ans[i][j].second<<"\t";
    //     }
    //     cout<<endl;
    // }
    return 0;
}