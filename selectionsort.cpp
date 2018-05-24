#include<iostream>
using namespace std;
int main(){
int n,i,j,k,a[1000],t;
cin>>n;
for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n-2;i++)
{
   k=i;
   for(j=i+1;j<n;j++)
    {if(a[j]<a[k])
    k=j;}
   t=a[k];
   a[k]=a[i];
   a[i]=t;
}
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
