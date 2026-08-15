#include<iostream>
using namespace std;
int main(){
    int i,n,arr[100];
    cout<<"enter the value of n ";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the array element ";
        cin>>arr[i];
    }
    int temp,start=0,end=n-1;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
    cout<<"Reverse array";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}