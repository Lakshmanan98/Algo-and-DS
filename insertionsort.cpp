#include<iostream>
using namespace std;
int main(){
int n,i,j,k,l,m,b;
cin>>n;
int a[n];
for(i=0;i<n;i++)
    cin>>a[i];
for(i=1;i<n;i++)
{
k=a[i];
m=i;
while(m>0&&a[m-1]>k)
{
    a[m]=a[m-1];
    m=m-1;
}
a[m]=k;
}
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
}
