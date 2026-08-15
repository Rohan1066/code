#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,8,3,2,1};
    int pass,i,flag=0;
    for(pass=0;pass<5;pass++){
        for(i=0;i<4-pass;i++){
            if(arr[i]>arr[i+1]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
    cout<<"the array is not sorted ";
    }
    else{
        cout<<"the array is sorted";
    }
    return 0;
}
