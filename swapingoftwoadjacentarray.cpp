#include<iostream>
using namespace std;
int main(){
    int swap,arr[6];
    //cout<<"enter the size of the array :";
    //cin>>n;
    for(int i=0;i<6;i++){
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }
    for(int i=0;i<6;i=i+2){
        swap=arr[i];
        arr[i]=arr [i+1];
        arr[i+1]=swap;
    }
    cout<<"the swaped array is :";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}