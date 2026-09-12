#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
        data=value;
        next= NULL;
    }
};
int main(){
    Node *Head;
    Head=NULL ;
    int arr[]={2,4,6,8,9,33,5};
    for(int i=0;i<7;i++){
        if(Head==NULL){
            Head=new Node(arr[i]);

        }
        else{
            Node*temp;
            temp=new Node(arr[i]);
            temp->next=Head;
            Head=temp;


        }
    }
    if(Head!=NULL){
        Node*temp;
        temp=Head;
        Head=Head->next;
        delete temp;
    }
    Node*ptr;
    ptr=Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
} 