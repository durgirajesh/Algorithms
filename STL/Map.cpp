#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
     
	unordered_map<int,int> ump1;
	for(int i=0;i<4;i++){
		int x; cin>>x;
		ump1[x]=i;
	}
	
	unordered_map<int,int> ::iterator it5;
	for(it5=ump1.begin();it5!=ump1.end();it5++){
		cout<<it5->first<<" "<<it5->second<<" "<<endl;
	}
	auto pos=ump1.end();
	cout<<ump1.count(2)<<endl;
	
		
	map<int,string> mp;
	mp.insert(pair<int,string>(4,"Camera"));
	mp.insert(pair<int,string>(5,"lessons"));
	mp.insert(pair<int,string>(5,"Dell"));	
	/*
	int z; cin>>z;
	for(int i=0;i<z;i++){
		int x; string s; 
		cin>>x>>s;
		mp.insert(pair<int,string>(x,s));
	}
	*/
	map<int,string> :: iterator it1;
	for(it1=mp.begin();it1!=mp.end();it1++){
		cout<<it1->first<<" "<<it1->second<<endl;
	}
	cout<<"Number of elements "<<mp.size()<<endl;
	cout<<mp.max_size()<<endl;
	
	map<int,string> mp2(mp.begin(),mp.end());
	for(auto i : mp2){
		cout<<i.first<<" "<<i.second<<" "<<endl;
	}
	
	
	map<int,int> mp3;
	int arr[]={1,1,2,3,4,4,4,1,3,2};
	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		mp3[arr[i]]++;
	}
	for(auto x : mp3){
		cout<<x.first<<" "<<x.second<<" "<<endl;
	}
	
	map<string,int> wordfreq;
	string str="geeks for geek for geeks geek lesson";
	stringstream ss(str);
	string word;
	while(ss>>word){
		wordfreq[word]++;
	}
	
	map<string,int> :: iterator it4;
	for(it4=wordfreq.begin();it4!=wordfreq.end();it4++){
		cout<<it4->first<<" "<<it4->second<<" "<<endl;
	}
	
}
