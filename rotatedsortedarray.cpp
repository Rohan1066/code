#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"enter array element ";
        cin>>arr[i];
    }
    int count=0;
    for(i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count++;
    }
    if(count<=1){
        cout<<"sorted and rotated";}
    else{
        cout<<"not sorted and rotated";
    }
    return 0;
}