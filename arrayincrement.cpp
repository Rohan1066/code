#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        arr[i]=arr[i]+2;
    }
    cout<<"the new aarray is ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}