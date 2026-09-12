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
    int x=2;
    int value=30;
    Node*temp=Head;
    x--;
    while(x--){
        temp=temp->next;
    };
    Node*temp2=new Node(30);
    temp2->next=temp->next;
    temp->next=temp2;
    Node*ptr;
    ptr=Head;
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }

} 