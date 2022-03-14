#include<iostream>
#include<vector>
using namespace std;
//decimal to binary
// void binary(int n){
//     vector<int> bin(n);
//     int i=0;
//     while(n!=0){
//         bin[i]=n%2;
//         i++;
//         n/=2;
//     }
//     for(int j=i-1;j>=0;j--){
//         cout<<bin[j];
//     }
//     cout<<endl;
// }

//binary to decimal
// void decimal(long int n){
//     int rem,dec=0,i=1;
//     while(n!=0){
//         rem=n%10;
//         dec+=(rem*i);
//         i*=2;
//         n/=10;
//     }
//     cout<<dec<<endl;
// }


//prime or not
// void isPrime(int n){
//     int c=0;
//     for(int i=2;i<n;i++){
//         if(n%i==0)
//             c++;

//     }
//     if(c>0)
//     cout<<"not prime\n";
//     else
//     cout<<"prime\n";
// }

//fibonacci
void fibo(int n){
    int a=0,b=1;
    cout<<a<<" ";
    if(n==1)
        return;
    cout<<b<<" ";
    if(n==2)
    return;
    for(int i=0;i<n-2;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}

int main(){
    int n;
    cin>>n;
    fibo(n);
    // long int n;
    // cin>>n;
    // decimal(n);
}