#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
};
int countLeafNode(Node*root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return countLeafNode(root->left)+countLeafNode(root->right);
}
int main(){
    Node*root=new Node{30,NULL,NULL};
    root->left=new Node{20,NULL,NULL};
    root->right=new Node{40,NULL,NULL};
    root->left->left=new Node{50,NULL,NULL};
    root->left->right=new Node{60,NULL,NULL};

    cout<<"number of leaf nodes :"<<countLeafNode(root);
    return 0;
}