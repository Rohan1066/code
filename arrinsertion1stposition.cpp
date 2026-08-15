#include<iostream>
using namespace std;
int main(){
    int i,value,arr[8]={11,22,33,44,55};
    int n=5;
    cout<<"enter the element that insert :";
    cin>>value;
    for(i=n+1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    n++;
    cout<<"the new array is =";
    for(i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}