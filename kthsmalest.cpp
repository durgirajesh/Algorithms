#include<iostream>
#include<algorithm>
using namespace std;

int kthsmallest(int a[],int n,int q){
    sort(a,a+n);
    return a[q-1];
}

int main()
{
    int n;
    cout<<"Enter n : \n";cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;cin>>k;
    cout<<kthsmallest(a,n,k)<<" "<<endl;
}