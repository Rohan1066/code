#include<iostream>
using namespace std;
int main(){
    int i,n,arr[100];
    cout<<"enter the size of the array :";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }
    cout<<"the array is :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}