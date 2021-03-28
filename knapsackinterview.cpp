#include<bits/stdc++.h>
using namespace std;

struct item{
	int value;
	int weight;
	
	item(int a,int b)
	{
		this->value=a;
		this->weight=b;
	}
	
};

bool cmp(struct item a,struct item b){
	double s1=(double)a.value/(double)a.weight;
	double s2=(double)b.value/(double)b.weight;
	return s1>s2;
}

double test(int w,struct item arr[],int n)
{
	sort(arr,arr+n,cmp);
	int cw=0;
	double fv=0.0;
	
	for(int i=0;i<n;i++)
	{
		if(cw+arr[i].weight<=w){
			cw+=arr[i].weight;
			fv+=arr[i].value;
		}
		else
		{
			int re=w-cw;
			fv+=arr[i].value*((double)re/(double)arr[i].weight);
			break;
		}
	}
	
	return fv;
	
}


int main()
{
	item arr[]={{500,15},{200,20},{100,5}};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x;cin>>x;
	int fcv=test(x,arr,n);
	cout<<fcv<<" ";
	return 0;
}

