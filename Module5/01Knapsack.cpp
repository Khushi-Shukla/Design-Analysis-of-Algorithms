#include<iostream>
#include<vector>
using namespace std;

void knapSack(int W, int n, vector<int> &benefit, vector<int> &weight){
    vector<vector<int>> dp(n+1, vector<int>(W+1,0));

    for(int i=1;i<=n;i++){
        for(int w=0;w<=W;w++){
            if(weight[i-1]<=w){
                dp[i][w]=max((benefit[i-1]+ dp[i-1][w-weight[i-1]]), dp[i-1][w] );
            }
            else{
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    // for(auto row:dp){
    //     for(auto a:row){
    //         cout<<a<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<"The maximum value is "<<dp[n][W];

}

int main(){
    int n, W;
    cout<<"Enter total items: ";
    cin>>n;
    cout<<"Enter total weight/capacity of knapsack: ";
    cin>>W;
    vector<int> b(n), w(n);
     for(int i=0;i<n;i++){
        cout<<"Enter cost of item "<<i+1<<": ";
        cin>>b[i];
        cout<<"Enter weight of item "<<i+1<<": ";
        cin>>w[i];
       
        cout<<endl;
    }
    

    knapSack(W, n, b, w);
    return 0;
}