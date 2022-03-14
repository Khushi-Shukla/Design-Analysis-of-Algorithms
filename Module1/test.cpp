#include<iostream>
using namespace std;

int main(){
    int l,b, perimeterR, areaR;
    cout<<"Enter length: ";
    cin>>l;
    cout<<"Enter breadth: ";
    cin>>b;
    perimeterR=2*(l+b);
    areaR=l*b;
    cout<<"The perimeter of the rectangle is: "<<perimeterR<<endl;
    cout<<"The area of the rectangle is: "<<areaR<<endl; 
    return 0;
}