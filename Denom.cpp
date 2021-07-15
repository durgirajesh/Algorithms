#include<iostream>
#include<vector>
using namespace std;

void print(int a[],int b[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "<<b[i]<<" "<<endl;
	}
}

vector<int> min(int a[],int b[],int N,int amt)
{
	vector<int> vec;
	
	int i=0,j=0;
	while(i<N){
		
		int d = amt/a[i];
		
		if(d!=0 && d<=b[j]){
			amt-=d*a[i];
			cout<<a[i]<<"->"<<d<<endl;
			vec.push_back(d);
		}
		else if(d > b[j]){
			amt-=b[j]*a[i];
			cout<<a[i]<<"->"<<b[j]<<endl;
			vec.push_back(b[j]);
		}
		
		i++;
		j++;
		
		if(amt==0){
			return vec;
		}
	}
}

int main()
{
	int N; cin>>N;
	int notes[N], denom[N];
	
	for(int i=0;i<N;i++){
		cin>>notes[i]>>denom[i];
	}
	
	print(notes,denom,N);
	int amount; cin>>amount;
	vector<int> vt = min(notes,denom,N,amount);
	
	for(int i=0;i<vt.size();i++){
		cout<<vt[i]<<" ";
	}
	
	return 0;
}
