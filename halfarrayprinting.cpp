#include<iostream>
using namespace std;
int main(){
    int arr[100],n;
    cout<<"enter the size of array :";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }
    cout<<"the half array of the given array is :";
    if(n%2==0){
        for(int i=0;i<n/2;i++){
            cout<<arr[i]<<" ";}
    }
    if(n%2!=0){
        for(int i=0;i<(n+1)/2;i++){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}