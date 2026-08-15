#include<iostream>
using namespace std;
int main(){
    int arr[100],n,i,sum=0;
    float average;
    cout<<"enter the size of the array :";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"enter the element of the array :";
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
    average=sum/(float)n;
    cout<<"average is ="<<average<<endl;
    for(i=0;i<n;i++){
        if(arr[i]>average){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}