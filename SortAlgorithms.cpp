#include<iostream>
using namespace std;

void mergesort(int d[],int start,int end);
void Qsort(int e[],int low,int high);
void ssort(int arr[],int n);
void bsort(int brr[],int n);
void Isort(int crr[],int n);
void heapsort(int drr[],int n);
void print(int arr[],int n);

int main(){
	int arr[5]={3,4,1,6,8};
	bsort(arr,5);
	print(arr,5);
	
	
	int brr[5]={-1,-5,9,10,4};
	ssort(brr,5);
	print(brr,5);
	
	int crr[5]={-10,4,9,-12,10};
	Isort(crr,5);
	print(crr,5);

	
	int drr[5]={-19,8,3,1,10};
	mergesort(drr,0,4);
	print(drr,5);
	
	
	int err[5]={-1,1,9,-3,4};
	Qsort(err,0,4);
	print(err,5);
	
	int frr[5]={-1,10,8,-12,-4};
	heapsort(frr,5);
	print(frr,5);
	
	return 0;
}

void print(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void bsort(int a[],int n)
{
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
// O(n^2)
// Best case : O(n)

void ssort(int b[],int n){
	
	for(int i=0;i<n-1;i++){
		int min_indx=i;
		for(int j=i+1;j<n;j++){
			if(b[j]<b[min_indx]){
				min_indx=j;
			}
		}
		swap(b[i],b[min_indx]);
	}
}
//O(n^2) - All Cases


void Isort(int c[],int n){
	int key,j;
	for(int i=1;i<n;i++){
		j=i-1; key=c[i];
		while(j>=0 && c[j] > key){
			c[j+1]=c[j];
			j--;
		}
		c[j+1]=key;
	}
}
// O(n^2)
// Best case : O(n)


void maxheapify(int arr[],int i,int n){
	
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	
	if(l<n && arr[l] > arr[i]){
		largest=l;
	}
	if(r<n && arr[r] > arr[largest]){
		largest=r;
	}
	if(largest!=i){
		swap(arr[i],arr[largest]);
		maxheapify(arr,largest,n);
	}
}

void buildmaxheap(int q[],int n){
	for(int i=n/2;i>=0;i--){
		maxheapify(q,i,n);
	}
}

void heapsort(int d[],int n){
	buildmaxheap(d,n);
	int heapsize=n;
	for(int i=n-1;i>=1;i--){
		swap(d[0],d[i]);
		heapsize--;
		maxheapify(d,0,heapsize);
	}
}
// O(nlogn) - ALL Cases 

void merge(int a[],int start,int mid,int end)
{
	int tmp[end-start+1];
	int i=start,j=mid+1,k=0;
	
	while(i<=mid && j<=end){
		if(a[i] <= a[j]){
			tmp[k]=a[i];
			k++,i++;
		}
		else{
			tmp[k]=a[j];
			k++, j++;
		}
	}
	
	while(i<=mid){
		tmp[k]=a[i];
		i++; k++;
	}
	
	while(j<=end){
		tmp[k]=a[j];
		j++, k++;
	}
	
	for(int i=start;i<=end;i++){
		a[i]=tmp[i-start];
	}
}


void mergesort(int arr[],int start,int end)
{
	if(start<end){
		int mid=start+(end-start)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
// O(nlogn) - ALL Cases

int partition(int arr[],int low,int high)
{
	int i=low-1;
	int pivot = arr[high];
	for(int j=low;j<=high-1;j++){
		if(arr[j] < pivot){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[high]);
	return (i+1);
}

void Qsort(int a[],int low,int high){
	if(low<high){
		int pi=partition(a,low,high);
		Qsort(a,low,pi-1);
		Qsort(a,pi+1,high);
	}
}
// O(nlogn) - Best, Average cases
// O(n^2) - Worst case






