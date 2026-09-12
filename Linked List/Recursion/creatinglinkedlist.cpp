Node*createLinkedList(arr[2,3,5,8,9],0,size(5){
    if(index==size){
        return NULL;
    }
    Node*temp;
    temp=new Node(arr[0]);
    temp->next=createLinkedList(arr[],index+1,size);
    return temp;
})