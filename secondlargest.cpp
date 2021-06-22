#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;cin>>k;
	int arr[k];
	for(int i=0;i<k;i++){
		cin>>arr[i];
	}
	sort(arr,arr+k);
	int j=0;
	int tmp[k];
	for(int i=0;i<k-1;i++){
		if(arr[i]!=arr[i+1]){
			tmp[j++]=arr[i];
		}
	}
	
	tmp[j++]=arr[k-1];
	
	for(int i=0;i<j;i++){
		cout<<tmp[i]<<"\t";
	}
	cout<<endl;
	
	if(j==1){
		cout<<"-1";
	}
	else{
		cout<<tmp[j-2];
	}
}
