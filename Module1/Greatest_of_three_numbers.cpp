#include<iostream>
using namespace std;
int main(){
    //find greatest of 3 numbers
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    int max;
    if(a>=b && a>=c){
        max=a;
    }
    if(b>=a && b>=c){
        max=b;
    }
    if(c>=a && c>=b){
        max=c;
    }
    cout<<max;

    return 0;
}
//     if(a>b && a>c){
//         cout<<"a= "<<a<<" is the greatest number\n";
//     }
//     else if(b>a && b>c){
//         cout<<"b= "<<b<<" is the greatest number \n";
//     }
//     else if(c>a && c>b){
//         cout<<"c= "<<c<<" is the greatest number\n";
//     }
//     else if(a==b){
//         if(b>c){
//             cout<<"a is equal to b = "<<a;
//         }
//         else{
//             cout<<"c= "<<c<<" is the greatest number\n";
//         }
//     }
//       else if(a==c){
//         if(a>b){
//             cout<<"a is equal to c = "<<a;
//         }
//         else{
//             cout<<"b= "<<b<<" is the greatest number\n";
//         }
//     }
//       else if(c==b){
//         if(b>a){
//             cout<<"b is equal to c = "<<b;
//         }
//         else{
//             cout<<"a= "<<a<<" is the greatest number\n";
//         }
//     }
//     else{
//         cout<<"All the numbers are equal "<<a<<"\n";
//     }
//     return 0;
// }
