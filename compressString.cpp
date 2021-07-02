#include<iostream>
using namespace std;

void compress(string str)
{
	int n=str.length();
	int count=1;
	
	for(int i=0;i<n;i++)
	{
		if(str[i]==str[i+1]){
			count++;
		}
		else{
			cout<<str[i]<<count;
			count=1;
		}
	}
}

int main()
{
	string str;
	cin>>str;
	compress(str);
}
