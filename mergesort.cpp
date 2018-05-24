#include<iostream>
using namespace std;
void Merge(int l[],int x,int r[],int y,int a[]);
void Mergesort(int a[],int n)
{
  int i,j,k,l,m,b[1000],c[1000];
  if(n==1)return;
  l=n/2;
  k=n-l;
for(i=0;i<l;i++)
    b[i]=a[i];
for(i=l;i<n;i++)
    c[i-l]=a[i];
Mergesort(b,l);
Mergesort(c,k);
Merge(b,l,c,k,a);
}
void Merge(int l[],int x,int r[],int y,int a[]){
int i=0,j=0,k=0,m,n;
while(i<x&&j<y){
    if(l[i]<=r[j])
    {
        a[k]=l[i];
        i++;
        k++;
    }
    else{
        a[k]=r[j];
        j++;
        k++;
    }
}
    while(i<x){
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<y){
        a[k]=r[j];
        j++;
        k++;
    }
}
int main(){
int n,i,j,k,l,m;
cin>>n;
int a[n];
for(i=0;i<n;i++)
    cin>>a[i];
Mergesort(a,n);
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
