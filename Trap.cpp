#include<bits/stdc++.h>
using namespace std;

int mini(int L,int D,int X){
    
    stack<int>st;
    
    for(int i=L;i<=D;i++){
        
        int j=i;
        int sum=0,q;
        while(j>0){
            q=j%10;
            sum=sum+q;
            j=j/10;
        }
        
        if(sum==X)
            st.push(i);
            
    }
    int M=st.top();
        
    while(st.size()>1){
    	st.pop();
	}
	int N=st.top();
	cout<<N<<endl;
	cout<<M<<" "<<endl;
    
}

int main() {
    
    int L,D,X;
    cin>>L>>D>>X;
    
    mini(L,D,X);
}
