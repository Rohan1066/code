#include<iostream>
using namespace std;
int main(){
    int i,max=-1,smax=-1,arr[8]={2,5,8,6,9,7,12,13};
    for(i=0;i<8;i++){
        if(arr[i]>=max){
            smax=max;
            max=arr[i];
        }
    }
    cout<<"the second largest element in array is :"<<endl;
    cout<<smax;
}