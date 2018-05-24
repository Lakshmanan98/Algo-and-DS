#include<iostream>
using namespace std;
int main(){
int n,i,j,k,l=0,m,c=0,x=0;
cin>>n;
int a[n],b[n]={0};
for(i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    for(i=0;i<n;i++)
    {
     b[i]=-1;c++;x=0;
     for(j=0;j<i;j++)
     {
         if(a[i]==a[j]&&b[j]==-1)
         {b[j]=-2;c--;x=1;break;}
     }
      if(c>m&&x==0)
         {
          for(k=0;k<i;k++)
          {
              if(b[k]==-1)
              {b[k]=-2;break;}
          }
      }
     }
cout<<c;
}
