#include<iostream>
using namespace std;
int main(){
    int k,n;
    cout<<"enter the size of array :";
    cin>>n;
    int arr[n];
    cout<<"enter the element of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the value of k :";
    cin >>k;
    k=k%n;
    int temp[n];//for copy the element
    for(int i=0;i<k;i++){
        temp[i]=arr[n-k+i];//store last k elemet
    }
    for(int i=k;i<n;i++){
        temp[i]=arr[i-k];//storing first k element
    }
    cout<<"rotated array :";
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}