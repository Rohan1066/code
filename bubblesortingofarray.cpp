#include<iostream>
using namespace std;
int main(){
    int arr[5]={22,1,44,33,4};
    int pass,i,swap;
    for(pass=0;pass<4;pass++){//bubble sorting i do herebnjk
        for(i=0;i<4-pass;i++){
            if(arr[i]>arr[i+1]){
                swap=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=swap;
            }
        }
    }
cout<<"sorted array is :";
for(i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}
