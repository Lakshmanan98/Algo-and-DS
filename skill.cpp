#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n=49,i,j,s=0,avg=0,c,l,m,f;
//cin>>n;
float k=0;
int a[n]={8996,9816,669,5706,4058,8965,6475,11941,7558,7294,5007,6958,3409,6770,11826,704,9039,12155,
3183,10696,5973,339,2328,9208,10009,3913,11846,7257,7354,7715,11078,2300,11697,1039,
7115,4351,8315,7274,5811,12267,3368,1110,9607,1255,890,1061,6360,5213,6965};
for(i=0;i<n;i++)
{//cin>>a[i];
k+=a[i];}
//k=k/n;
m=k/n;
cout<<"m= "<<m<<endl;
sort(a,a+n);
for(i=0;i<n;i++)
    cout<<a[i]<<" ";
cout<<endl;
cout<<endl;
f=abs(a[n/2]-m);
l=abs(a[(n/2)+1]-m);
/*if(l<f)
cout<<a[(n/2)+1];
else
cout<<a[n/2];*/
cout<<a[(n/2)-1];
}
