#include<iostream>
using namespace std;
int main(){
    int i,arr[5],max=-1;
    for(i=0;i<5;i++){
        cout<<"enter the elements of array :";
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }
    cout<<"the largest element in the array is "<<max;
    return 0;
}