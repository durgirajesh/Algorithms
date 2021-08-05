#include<iostream>
using namespace std;

void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

void merge(int a[],int start,int mid,int end){
	
	int tmp[end-start+1];
	int i = start, j=mid+1, k=0;
	
	while(i<=mid && j<=end){
		if(a[i] <= a[j]){
			tmp[k]=a[i];
			k++; i++;
		}
		else{
			tmp[k]=a[j];
			k++,j++;
		}
	}
	
	while(i<=mid){
		tmp[k]=a[i];
		k++; i++;
	}
	
	while(j<=end){
		tmp[k]=a[j];
		k++; j++;
	}
	
	for(int i=start;i<=end;i++){
		a[i]=tmp[i-start];
	}
}

void mergesort(int a[],int start,int end)
{
	if(start < end){
		int mid = start + (end - start)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,end);
		merge(a,start,mid,end);
	}
}

int main()
{
	int arr[5]={3,4,1,-1,2};
	mergesort(arr,0,4);
	print(arr,5);
}
