#include<iostream>
using namespace std;

int bsearch(int arr[],int l,int h,int x){


	int mid=(l+h)/2;

	if(l<h){

		if(arr[mid]==x){
			return mid;
		}

		if(arr[mid]>x){

			return bsearch(arr,l,mid-1,x);
		}

		return bsearch(arr,mid+1,h,x);
	}
}


int main()
{
	int n;cin>>n;
	int a[n];

	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int k;cin>>k;
	int b[k];
	int j=0;
	
	while(k>0){

		int x;cin>>x;
		b[j]=bsearch(a,0,n-1,x)+1;
		j++;k--;
	}
	
	for(int i=0;i<j;i++){
		cout<<b[i]<<"\n";
	}
}

