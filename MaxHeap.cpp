#include<iostream>
using namespace std;

void print(int a[],int l){
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void max_heap(int a[],int i,int N){

    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<N && a[l]>a[i]){
        largest=l;
    }
    if(r<N && a[r]>a[largest]){
        largest=r;
    }
    if(largest!=i){
        int tmp=a[i];
        a[i]=a[largest];
        a[largest]=tmp;
        max_heap(a,largest,N);
    }
}

void buildmaxheap(int a[],int n){

    for(int i=n/2;i>=0;i--){
        max_heap(a,i,n);
    }
}


int main()
{
    int n;
    cout<<" Enter n : ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    print(a,n);
    buildmaxheap(a,n);
    print(a,n);
}