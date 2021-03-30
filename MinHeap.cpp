#include<iostream>
using namespace std;

void minHeap(int a[],int i,int N){

    int smallest=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<N && a[l]<a[i]){
        smallest=l;
    }

    if(r<N && a[r]<a[smallest]){
        smallest=r;
    }

    if(smallest!=i){
        int tmp=a[i];
        a[i]=a[smallest];
        a[smallest]=tmp;
        minHeap(a,smallest,N);
    }
}

void buildminheap(int a[],int n){
    for(int i=n/2;i>=0;i--){
        minHeap(a,i,n);
    }
}

int main()
{
    int n;
    cout<<"Enter n : " ;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    buildminheap(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}