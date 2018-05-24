#include<iostream>
using namespace std;
int part(int *a,int s,int e);
void quicksort(int *a,int s,int e){
int i,j,k;
if(s<e){
k=part(a,s,e);
quicksort(a,s,k-1);
quicksort(a,k+1,e);
}
}
int part(int *a,int s,int e){
int pivot=a[e],k=s,t;
for(int i=s;i<e;i++)
{
    if(a[i]<=pivot)
    {
        t=a[k];
        a[k]=a[i];
        a[i]=t;
        k++;
    }
}
t=a[e];
a[e]=a[k];
a[k]=t;
return k;
}
int main(){
    int n,i,j,k,l,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
}
