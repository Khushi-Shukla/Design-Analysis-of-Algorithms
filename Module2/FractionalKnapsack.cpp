//Knapsack
#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int n=1e5;
vector<int> wt(n);
vector<int> cost(n);

vector<pair<int, pair<int, int>>> chosen;
pair<int, pair<float,float>> residue;

float knapsack(float m){
    vector<pair<float, int>> ratio(n);
    for(int i=0;i<n;i++){
        ratio[i].first=cost[i]/(wt[i]*1.0);
        ratio[i].second=i;
    }
    sort(ratio.rbegin(), ratio.rend());
    float profit=0.0;
    int i;
    for(i=0;i<n;i++){
        int j=ratio[i].second;
        if(m>0 && wt[j]<=m){
            m-=wt[j];
            profit+=cost[j];
            chosen.push_back({j+1, {cost[j], wt[j]}});
        }
        else
            break;
    }
    if(m>0){
        int j=ratio[i].second;
        profit+=cost[j]*(m/(wt[j]*1.0));
        residue.first=j+1;
        residue.second.first=cost[j]*(m/(wt[j]*1.0));
        residue.second.second=wt[j];
        //chosen.push_back({j, {cost[j]*(m/(wt[j]*1.0)), wt[j]}});
    }
    return profit;

}

int main(){
    cout<<"Enter size of array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter cost of item "<<i+1<<": ";
        cin>>cost[i];
        cout<<"Enter weight of item "<<i+1<<": ";
        cin>>wt[i];
       
        cout<<endl;
    }
    float m;
    cout<<"Enter capcity of knapsack: ";
    cin>>m;
    float profit=knapsack(m);
    cout<<"The profit is "<<profit<<endl;
    cout<<"\nThe items chosen with their weight and cost are:\n";
    cout<<"Item\tCost\tWeight\n";
    for(auto a: chosen){
        cout<<a.first<<"\t"<<a.second.first<<"\t"<<a.second.second<<endl;
    }
    if(residue.second.first!=0){
        cout<<"Along with a fraction of item "<<residue.first<<" having cost "<<cost[residue.first-1]<<endl;
        cout<<"Cost considered="<<residue.second.first<<endl;
    }

}