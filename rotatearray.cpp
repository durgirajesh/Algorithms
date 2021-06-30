#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int rotate(int arr[],int n,int q)
{
	int k1=(n-q);
	int tm1[k1],tm2[q];
	
	for(int i=0;i<k1;i++){
		tm1[i]=arr[i];
	}
	
	int w=0;
	
	for(int j=k1;j<n;j++){
		tm2[w++]=arr[j];
	}
	
	for(int i=0;i<q;i++){
		arr[i]=tm2[i];
	}
	
	int s=0;
	for(int j=q;j<n;j++){
		arr[j]=tm1[s++];
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}


int main()
{
	int n;cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	int k;cin>>k;
	rotate(a,n,k);
	
}
