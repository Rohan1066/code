#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
int countonechild(Node*root){
    if(root==NULL){
        return 0;
    }
    if((root->left!=NULL && root->right==NULL)||(root->left==NULL && root->right!=NULL)){
        return 1+countonechild(root->left)+countonechild(root->right);
    }
    return countonechild(root->left)+countonechild(root->right);
}
int main(){
    Node*root=new Node(20,NULL,NULL);
    root->left=new Node(30,NULL,NULL);
    root->right=new Node(50,NULL,NULL);
    root->left->left=new Node(60,NULL,NULL);
    root->left->right=new Node(80,NULL,NULL);
    cout<<"no of one child :"<<countonechild(root);
    return 0;
}