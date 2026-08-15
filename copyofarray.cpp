#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,44,66,67};
    int arr2[5],i;
    for(i=0;i<5;i++){
        arr2[i]=arr1[i];
    }
cout<<"the copied array arr2[] is :";
for (i=0;i<5;i++){
    cout<<arr2[i]<<" ";
}
    return 0;
}