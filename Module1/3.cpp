#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: to calculate 1/2 + 2/3 +...+ n/n+1: ";
    cin>>n;
    float sum=0;
    for(int i=1;i<=n;i++){
        sum+=i/((i+1)*1.0);
    }
    cout<<"The result is : "<<sum<<endl;
    return 0;
}