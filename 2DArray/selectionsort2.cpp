#include<iostream>
using namespace std;
int main(){
    int arr[100]={2,3,45,2,9},i,j,minindex,swap;
    int n=5;
    for(j=0;j<n-1;j++){
        minindex=j;
        for(i=j+1;i<n;i++){
            if(arr[i]<arr[minindex]){
                minindex=i;
            }
        }
        swap=arr[j];
           arr[j]=arr[minindex];
            arr[minindex]=swap;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}