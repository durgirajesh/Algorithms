#include<iostream>
using namespace std;

void bsort(int arr[],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
			{
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
}


int main()
{
	int x;cin>>x;
	int arr[x];
	
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
	
	bsort(arr,x);
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" "<<endl;
	}
	return 0;
}
