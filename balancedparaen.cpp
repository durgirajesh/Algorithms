#include<bits/stdc++.h>
#include<stack>
using namespace std;

bool isValid(string s) {
    int z=s.length();
    
    stack<char>sc;
    
    for(int i=0;i<z;i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            sc.push(s[i]);
        }
        char x=sc.top();
        
        if(x=='(' && s[i]==')' || x=='[' && s[i]==']' || x=='{' && s[i]=='}') {
        	cout<<s[i]<<" ";
            sc.pop();
        }
    }
    return(sc.empty());
}

int main()
{
	string s;
	cin>>s;
	cout<<isValid(s);
	//0 -> false anyting non-zero (1 or etc) is true
}
