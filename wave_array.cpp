#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void wave(int arr[],int n)
{
    sort(arr,arr+n);
    vector<int>v1;
    for(int i=1;i<n-1;i++){
        if(i%2!=0){
            swap(arr[i],arr[i-1]);
        }
    }
    if(n%2==0){
        swap(arr[n-2],arr[n-1]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    wave(a,n);
}