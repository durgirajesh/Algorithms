#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int bsearch(int a[],int l,int r,int ele){
	
	int mid = (l+r)/2;
	
	if(l<r){
		
		if(a[mid]==ele){
			return mid;
		}
		
		if(a[mid]>ele){
			return bsearch(a,l,mid-1,ele);
		}
		
		return bsearch(a,mid+1,r,ele);
	}
}


int pivot(int arr[],int l,int h){
	
	if(h<l){
		return -1;
	}
	
	if(h==l){
		return l;
	}
	
	int mid = (l+h)/2;
	
	if(mid < h && arr[mid] > arr[mid+1]){
		return mid;
	}
	
	if(mid > l && arr[mid] < arr[mid-1]){
		return (mid-1);
	}
	
	if(arr[l] >= arr[mid]){
		return pivot(arr,l,mid-1);
	}
	
	return pivot(arr,mid+1,h);
	
}


int pbsearch(int a[],int n,int k){
	
	int pt = pivot(a,0,n-1);
	
	if(pt==-1){
		return bsearch(a,0,n-1,k);
	}
	
	if(a[pt]==k){
		return pt;
	}
	
	if(a[0]<pt){
		return bsearch(a,0,pt-1,k);
	}
	
	return bsearch(a,pt+1,n-1,k);
}
int main()
{
	int n;cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int k;cin>>k;
	
	cout<<pbsearch(a,n,k);
}
