#include<iostream>
using namespace std;
class myqueue{
    int *arr,capacity,size;
    public:
    myqueue(int c){
        capacity=c;
        arr=new int[capacity];
        size=0;
    }
    void enqueue(int x){
        if(size==capacity){
            cout<<"queue overflow"<<endl;
            return;
        }
        arr[size++]=x;
        cout<<x<<"enqueued"<<endl;
    }
};
int main(){
    myqueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    return 0;
}