#include<bits/stdc++.h>
#define LIMIT 100
using namespace std;

int dp[LIMIT][LIMIT];
int knapsack(int w,int wt[],int val[],int n)
{
	if(n==0 || w==0){
		return 0;
	}
	
	if(dp[n-1][w]!=-1){
		return dp[n-1][w];
	}
	else{
		if(w < wt[n-1]){
			return knapsack(w,wt,val,n-1);
		}
		else{
			dp[n-1][w] = max(val[n-1] + knapsack(w-wt[n-1],wt,val,n-1) , knapsack(w,wt,val,n-1));
			return dp[n-1][w];
		}
	}
}


int main()
{
	int val[] = {60,100,120};
	int wt[] = {10,20,30};
	int w=50;
	int n = sizeof(val)/sizeof(val[0]);
	for(int i=0;i<LIMIT;i++){
		for(int j=0;j<LIMIT;j++){
			dp[i][j]=-1;
		}
	}
	cout<<knapsack(w,wt,val,n);
	return 0;
}
