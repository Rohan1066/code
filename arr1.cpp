#include<iostream>
using namespace std;
int main(){
    int i,arr[6],sum=0,product=1;
    for(i=0;i<6;i++){
    cout<<"enter the array element :";
        cin>>arr[i];
    }
    for(i=0;i<6;i=i+2){
        sum=sum+arr[i];
    }
    for(i=1;i<6;i=i+2){
        product=product*arr[i];
    }
    cout<<"sum="<<sum;
    cout<<"\nproduct="<<product;
    return 0;
}
