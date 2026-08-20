#include<iostream>
using namespace std;
int main(){
    int i,j,swap;
    int arr[100]={1,4,7,2,3,0};
    int n=6;
    for(j=0;j<n;j++){
        for(i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                swap=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=swap;
            }
        }
    }
    cout<<"the sorted array is :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}