#include<iostream>
using namespace std;
int main(){
    int i,key=5,arr[6]={1,2,5,5,7,8},n=6;
    for(i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            break;
        }
    }
    return 0;
}