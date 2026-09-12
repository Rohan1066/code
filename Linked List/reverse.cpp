#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int value){
       data=value;
       next=NULL;
    }
};
int main(){
    Node*Head;
    Head=NULL;
    int arr[]={2,4,5,6,8};
    for(int i=0;i<5;i++){
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
    Node*prev=NULL;
    Node*current=Head;
    Node*next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    Head=prev;
    Node*temp=Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}