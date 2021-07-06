#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> leftrotate(vector<int>a,int d){
	
	int n=a.size();
    
    int q=n-d;
    int arr[q];
    
    for(int i=0;i<q;i++){
        arr[i]=a[i];
    }
    cout<<endl;
    
    
    for(int i=0;i<d;i++)
    {
        a[i]=a[q];
        q++;
    }
    
    int j=0;
    for(int i=d;i<n;i++){
        
        a[i]=arr[j];
        j++;
    }
    
    for(int i=0;i<n;i++){
    	cout<<a[i]<<" ";
	}
}


int main()
{
	int n;cin>>n;
	
	vector<int>a;
	
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	
	int d;cin>>d;
	
	leftrotate(a,d);
}
