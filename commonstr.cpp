#include<iostream>
#define MAX 26
using namespace std;

void cmn(string str1,string str2)
{
	int present[MAX];
	for(int i=0;i<MAX;i++){
		present[i]=0;
	}
	
	for(int i=0;i<str1.length();i++){
		present[str1[i]-'a'] = 1;
	}
	
	for(int k=0;k<str2.length();k++){
		
		if(present[str2[k]-'a']==1 || present[str2[k]-'a']==-1){
			present[str2[k]-'a']=-1;
		}else{
			present[str2[k]-'a']=2;
		}
	}
	
	for(int i=0;i<MAX;i++){
		if(present[i]==1 || present[i]==2){
			cout<<(char(i+'a'))<<" ";
		}
	}
}

int main()
{
	string str1,str2;
	cin>>str1>>str2;
	cmn(str1,str2);
}
