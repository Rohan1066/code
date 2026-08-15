#include<iostream>
using namespace std;
int main(){
    int n,low,mid,ans=-1,key;
    low=0;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n]={3,3,4,4,4,6,7,7,8,99,99,99},high=n-1;
    // for(int i=0;i<n;i++){
    //     cout<<"enter the sorted elements of the array :";
    //     cin>>arr[i];
    // }
    cout<<"enter key element :";
    cin>>key;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<"first occurance is at index :"<<ans;
    return 0;

}