#include<iostream>
using namespace std;
int main(){
    int arr[6]={22,33,44,22,11,0};
    int i,asc=1,desc=1;
    for(i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            asc=0;
        }
        if(arr[i]<arr[i+1]){
            desc=0;
        }
    }
    if(asc==1)
    cout<<"array is sorted in ascending order";
    else if(desc==1){
    cout<<"the array is sorted in descending order ";
    }
    else
    cout<<"array is not sorted";
    return 0;
}