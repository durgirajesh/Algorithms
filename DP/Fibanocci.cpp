#include<iostream>
#include<bits/stdc++.h>
#define max 100
using namespace std;

int dp[max];
int fib(int n)
{
	if(n<=1){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int fact(int m)
{
	if(m==1 || m==0){
		return m;
	}
	return m*fact(m-1);
}

int fibdp(int n){
	if(n<=1){
		return n;
	}
	if(dp[n]!=-1){
		return dp[n];
	}
	else{
		dp[n]=fibdp(n-1)+fibdp(n-2);
		return dp[n];
	}
}


int main()
{
	int n = 9;
	cout<<fib(n)<<endl;
	cout<<fact(n)<<endl;
	
	memset(dp,-1,sizeof(dp));
	cout<<fibdp(n)<<endl;
	/*
	for(int i=0;i<n;i++){
		cout<<dp[i]<<" ";
	}
	*/
}
