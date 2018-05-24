#include<iostream>
using namespace std;
struct node{
int data;
struct node* next;
};
int main(){
node* temp;
node* head=NULL;
int n,i,j,k,l=0,m,f=0;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>k;
    node* t=new node();
    if(head==NULL)
        {head=t;
         t->data=k;
    t->next=NULL;}
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=t;
    t->data=k;
    t->next=NULL;
}
cin>>m;
temp=head;
while(temp->next!=NULL)
temp=temp->next;
temp->next=head;
temp=head;
node* t=NULL;
node* x,s;
x=new node();
x->data=m;
x->next=NULL;
node* emp=head;
do{
    if(m<=temp->data){
       x->next=temp;
        f=1;
        if(temp==head)
        {
        while(emp->next!=head)
        emp=emp->next;
        emp->next=x;
        head=x;
        }
        if(t!=NULL)
        t->next=x;
        break;
    }
    t=temp;
    temp=temp->next;
}while(temp!=head);
if(f==0){
        emp=head;
        while(emp->next!=head)
        emp=emp->next;
        emp->next=x;
        x->next=head;
}
temp=head;
while(temp->next!=head)
    temp=temp->next;
temp->next=head;
head=x;
temp=head;
do{
    cout<<temp->data<<" ";
    temp=temp->next;
}while(temp!=x);
}
