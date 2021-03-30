#include<iostream>
using namespace std;

void print(int a[],int l){
    for(int i=0;i<l;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void maxheap(int a[],int i,int n){

    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[i]){

        largest=l;
    }
    if(r<n && a[r]>a[largest]){
        largest=r;
    }

    if(largest!=i){
        int tmp=a[largest];
        a[largest]=a[i];
        a[i]=tmp;
        maxheap(a,largest,n);
    }
}

void buildmaxheap(int a[],int n){
    for(int i=n/2;i>=0;i--){
        maxheap(a,i,n);
    }
}

void heapsort(int a[],int n){
    buildmaxheap(a,n);
    for(int i=n-1;i>=1;i--){
        
        int tmp=a[0];
        a[0]=a[i];
        a[i]=tmp;
        maxheap(a,0,i);
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
    print(a,n);
    buildmaxheap(a,n);
    print(a,n);
    heapsort(a,n);
    print(a,n);

    return 0;
}