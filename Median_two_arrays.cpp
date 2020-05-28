#include<iostream>
using namespace std;

void sort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

void swap(int a,int b)
{
	int tmp=a;
	a=b;
	b=tmp;
}

void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"->";
	}
	cout<<endl;
}

void median(int a[],int b[],int n1,int n2)
{
	int c[n1+n2];
	for(int i=0;i<(n1+n2);i++)
	{
		c[i]=a[i];
		
	}
}

int main()
{
	int n1,n2;
	cin>>n1;cin>>n2;
	int a[n1],b[n2];
	
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	
	sort(a,n1);
	display(a,n1);
	
	for(int j=0;j<n2;j++)
	{
		cin>>b[j];
	}
	
	sort(b,n2);
	display(b,n2);
	
	median(a,b,n1,n2);
	
	return 0;
}
