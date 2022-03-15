//binary search divide and conquer
#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[999];
    cout<<"Enter the array in ascending order otherwise the answer may not be correct\n";
    for(int i=0;i<n;i++){
        cout<<"Enter number "<<i+1<<"\n";
        cin>>arr[i];
    }

    int item;
    cout<<"Enter element to search: ";
    cin>>item;

    int i=0,j=n-1,mid;
    bool isFound=false;

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"Element not entered in ascending order. Please try again!\n";
            return 0;
        }
    }

    while(i<=j){
        mid=(i+j)/2; 
        if(arr[mid]==item){
            cout<<"Element "<<item<<" found at position "<<mid;
            isFound=true;
            break;
        }
        else if(arr[mid]>item){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }


    if(!isFound)
        cout<<"Element not present! ";

}