#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int longsubseq(int a[],int n){
    sort(a,a+n);
    int ans=0,cnt=0;
    vector<int>vec;
    vec.push_back(a[0]);

    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            vec.push_back(a[i]);
        }
    }
    for(int i=0;i<vec.size();i++){
        if(i>0 && vec[i]==vec[i-1]+1){               
            cnt++;
        }else{
            cnt=1;
        }
        ans=max(ans,cnt);
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter n : ";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<longsubseq(a,n);
}