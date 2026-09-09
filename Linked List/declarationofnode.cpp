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
    // Head=new Node(10);
    // cout<<Head->data<<endl;
    // cout<<Head->next<<endl;
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
    int length=0;
    Node*current=Head;
    while(current!=NULL){
        length++;
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
    cout<<"length="<<length<<endl;
    Node*fast=Head;
    Node*slow=Head;
    int middle=0;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<"middle="<<slow->data;
}    


