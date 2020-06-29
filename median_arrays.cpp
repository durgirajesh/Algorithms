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

void sort(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				swap(arr[i],arr[j]);
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
void avg(float a,float b)
{
	double c=(a+b)/2;
	cout<<c<<" ";
}
void median(int a[],int n)
{
	if(n%2==0)
	{
		return avg(a[(n/2)-1],a[(n/2+1)-1]);
	}
	else{
		cout<<a[((n+1)/2)-1]<<" ";
	}
}

void display(int arrr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arrr[i]<<"->";
	}
	cout<<endl;
}
void q(int a[],int b[],int n1,int n2)
{
	for(int i=0;i<n1;i++)
	{
		int u=a[i];
		push(u);
	}
	for(int j=0;j<n2;j++)
	{
		int h=b[j];
		push(h);
	}
	int s=(n1+n2);
	cout<<s<<" "<<endl;
	display(arr,s);
	median(arr,s);
}

int main()
{
	int n1,n2;
	cin>>n1>>n2;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<n2;j++)
	{
		cin>>b[j];
	}
	
	display(a,n1);
	display(b,n2);
	
	sort(a,n1);
	display(a,n1);
	
	sort(b,n2);
	display(b,n2);
	
	q(a,b,n1,n2);
	
	return 0;
}
