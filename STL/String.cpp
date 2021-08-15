#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{   
  
	vector<vector<char>> ans;
	
	for(int i=0;i<10;i++){
		ans.push_back(vector<char>());
		for(char j='a';j<'i';j++){
			ans[i].push_back(j);
		}
	}
	
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){
			cout<<ans[i][j];
		}
		cout<<endl;
	}
	vector<string> alpha={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	string str3="rajesh";
	str3.erase(0,1);
	cout<<str3<<endl;
	
	string str;
	
	str.append("Rajesh");
	for(auto ch:str){
		cout<<ch<<" ";
	}
	cout<<endl;
	char ch='D';
	str.push_back('D');
	str.insert(6,"Durgi"); // inserts at index 6
	cout<<str[0]<<" "<<str.at(0)<<endl;
	cout<<str<<endl;
	string s3="geeks";
	str.assign(s3); cout<<str<<endl;
	
	
	string s1="geeks for geeks";
	string s2="hello world";
	cout<<s1.insert(6,s2,0,5);
	s1.insert(6," are");
	cout<<s1<<endl;
	
	
	string s4="dell s2240ldell";
	int indx=s4.find("z"); // return first occurence index;
	cout<<indx<<endl;
	
	int ind=s4.find("dell",indx+1); // return second occurence index;
	cout<<ind<<endl;
	
	
	string s5="rajesh";
	string s6="durgi";
	//cout<<strcpy(s5,s6)<<endl;
	s5.clear(); cout<<s5;
	//s6.erase(1); cout<<s6<<endl;
	s6.erase(1,3); cout<<s6;
	
	
	
	
}
