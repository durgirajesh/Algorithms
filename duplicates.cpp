#include<iostream>
using namespace std;


int duplicates(int arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		int j=i+1;
		while(j<=n)
		{
			
			if(arr[i]==arr[j])
			{
				arr[i]=arr[n];
				n--;
				j++;
			}
			else{
				j++;
			}
		}
	}
	return n;
}

int ele(int ar[],int q,int e){
	for(int i=0;i<q;i++){
		if(ar[i]==e){
			return 1;
		}
	}
	return 0;
}

int remove(int aar[],int p)
{
	int m=0;
	for(int i=0;i<p;i++){
		if(!ele(aar,m,aar[i])){
			aar[m++]=aar[i];
		}
	}
	return m;
}

int main()
{
	int n1;cin>>n1;
	int a[n1];int b[n1];
	
	for(int j=0;j<n1;j++){
		cin>>b[j];
	}
	/*
	for(int i=0;i<n1;i++){
		cin>>a[i];
	}
	
	int x=duplicates(a,n1-1);
	for(int i=0;i<=x;i++){
		cout<<a[i]<<" "<<endl;
	}
	*/
	int y=remove(b,n1);
	for(int i=0;i<y;i++){
		cout<<b[i]<<" ";
	}
}
