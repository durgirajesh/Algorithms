#include<iostream>
#include<algorithm>
using namespace std;

void swap(int x,int y)
{
	int tmp=x;
	x=y;
	y=tmp;
}

void check(int a[],int n)
{
	sort(a,a+n);
	
	for(int i=1;i<n;i=i+2)
	{
		int tmp=a[i];
		a[i]=a[i-1];
		a[i-1]=tmp;
	}
}

int main()
{
	int n;cout<<"Enter n"<<endl;cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	check(a,n);
	//sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
