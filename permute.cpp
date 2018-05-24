#include<bits/stdc++.h>
using namespace std;
void swapit(char *a,char *b){
char t;
t=*a;
*a=*b;
*b=t;
}
void permute(string s,int a,int n){
int i;
if(a==n)
    cout<<s<<endl;
else{
    for(i=a;i<=n;i++){
        swapit(&s[a],&s[i]);
        permute(s,a+1,n);
        swapit(&s[a],&s[i]);
    }
}
}
int main(){
string s;
cin>>s;
int x=s.length();
permute(s,0,x-1);
}
