#include<iostream>
#include<algorithm>
using namespace std;

void knap(int a[],int b[],int n,int req){

    int cost[n];
    for(int i=0;i<n;i++){
        cost[i]=(a[i]/b[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(cost[j]<cost[j+1]){
                int tmp=cost[j];
                cost[j]=cost[j+1];
                cost[j+1]=tmp;

                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                int tp=b[j];
                b[j]=b[j+1];
                b[j+1]=tp;

            }
        }
    }

    int w=0;
    double v=0.0;

    for(int i=0;i<n;i++){
        if(w+b[i]<=req){
            v+=a[i];
            w+=b[i];
        }else{
            int rem=req-w;
            v+=((double)rem/(double)b[i])*a[i];
            break;
        }
    }

    cout<<v<<" ";

}



int main()
{
    int n;cin>>n;
    int wt[n],val[n];
    for(int i=0;i<n;i++){
        cin>>val[i]>>wt[i];
    }

    for(int i=0;i<n;i++){
        cout<<val[i]<<"\t"<<wt[i]<<" "<<endl;
    }

    int x;cin>>x;

    knap(val,wt,n,x);
}