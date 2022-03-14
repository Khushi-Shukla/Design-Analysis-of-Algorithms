//merge sort
#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r){
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[100];
	int b[100];
	
	for(int i=0;i<n1;i++){
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++){
		b[i]=arr[mid+1+i];	
	}
	int i=0, j=0, k=l;
	while(i<n1 && j<n2){
		if(a[i]<b[j]){
			arr[k]=a[i];
			k++;
			i++;
		}
		else{
			arr[k]=b[j];
			k++; j++;
		}
	}
	while(i<n1){
		arr[k]=a[i];
		k++;i++;
	}
	while(j<n2){
		arr[k]=b[j];
		k++; j++;
	}
}
void mergeSort(int arr[],int l,int r)
{
	if(l<r){
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
void display(int arr[],int size){
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[99];
	for(int i=0;i<n;i++){
		cout<<"Enter the array element "<<i+1<<": ";
		cin>> arr[i];
	}
	cout<<"Unsorted Array: ";
	display(arr,n);
	mergeSort(arr,0,n-1);
	cout<<"Sorted Array: ";
	display(arr,n);
	
	return 0;
}
