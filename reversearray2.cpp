#include<iostream>
using namespace std;
int main(){
    int n,swap,start=0;
    cout<<"enter the size of the array :";
    cin>>n;
    int end=n-1;
    int arr[n];
     for(int i=0;i<n;i++){
    cout<<"enter the element of the array ";
        cin>>arr[i];
    }
    while(start<end){
        swap=arr[start];
        arr[start]=arr[end];
        arr[end]=swap;
        start++;
        end--;

    }
    // for(j=0;j<n;j++){
    //     for(i=0;i<n;i++){
    //         swap=arr[i];
    //         arr[i]=arr[i+1];
    //         arr[i+1]=swap;
    //     }
    cout<<"the reverse array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}