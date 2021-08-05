#include<iostream>
using namespace std;

void print(int arr[],int n)
{
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int partition(int ar[],int low,int high)
{
	int pi = ar[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++){
		if(ar[j] < pi){
			i++;
			swap(ar[i],ar[j]);
		}
	}
	swap(ar[i+1],ar[high]);
	return (i+1);
}

void quicksort(int a[],int low,int high)
{
	if(low<high){
		int pi = partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}

int main()
{
	int arr[5]={4,1,-1,10,9};
	quicksort(arr,0,4);
	print(arr,5);
	
	return 0;
}
