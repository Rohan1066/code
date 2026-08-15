#include<iostream>
using namespace std;
int main(){
    int i,arr[4]={1,2,3,4},pos;
    int n=4;
    cout<<"enter the position of element :";
    cin>>pos;
    for(i=pos;i<=n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    cout<<"the new array is :";
    for (i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}