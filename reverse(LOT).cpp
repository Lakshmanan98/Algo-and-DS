
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
Node* newNode(int data){
    Node* root=new Node();
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
stack<int>s;
void LevelOrder(struct Node* root){
    int i,j,k=0,l,m;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        s.push(q.front()->data);
        if(q.front()->right!=NULL)
        {q.push(q.front()->right);
        }
        if(q.front()->left!=NULL)
        {q.push(q.front()->left);
        }
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main() {
	Node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	LevelOrder(root);
}
