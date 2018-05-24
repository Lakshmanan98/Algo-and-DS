#include<iostream>
using namespace std;
template<typename t>
void myfun(t n){
cout<<n;
}
int main(){
int n;
char k;
cin>>n>>k;
myfun<int>(n);
myfun<char>(k);
}
