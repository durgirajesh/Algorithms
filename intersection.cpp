#include<iostream>
#define max 1000
int top=-1;
int arr[max];
using namespace std;

int push(int a)
{
	if(top==max)
	{
		return 0;
	}
	top++;
	arr[top]=a;
}

void intersect(int a[],int b[],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(a[i]==b[j])
			{
				push(a[i]);
			}
		}
	}
	for(int i=0;i<=top;i++)
	{
		cout<<arr[i]<<"->";
	}
}

int main()
{
	int a[3]={1,2,3};
	int b[2]={2,8};
	
	int n1,n2;
	n1=sizeof(a)/sizeof(a[0]);
	n2=sizeof(b)/sizeof(b[0]);
	
	intersect(a,b,n1,n2);
	return 0;
}
