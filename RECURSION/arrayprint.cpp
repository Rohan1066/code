#include<iostream>
using namespace std;
void printarray(int arr[],int n,int i){
        if(i==n){
            return;
        }
        cout<<arr[i]<<" ";
        printarray(arr,n,i+1;
    }

int main(){
    int n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,n,0);
    return 0;
}