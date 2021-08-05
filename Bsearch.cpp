#include<iostream>
using namespace std;

int bsearch(int arr[],int l,int h,int x)
{
	if(l<=h){
		int mid=(l+h)/2;
		if(arr[mid]==x){
			return mid;
		}
		
		if(arr[mid] > x){
			return bsearch(arr,l,mid-1,x);
		}
		
		return bsearch(arr,mid+1,h,x);
	}
}

int main()
{
	int arr[5]={3,1,-1,2,10};
	int x; cin>>x;
	cout<<bsearch(arr,0,4,x);
	
	return 0;
}
