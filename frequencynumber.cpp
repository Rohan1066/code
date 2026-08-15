#include<iostream>
using namespace std;
int main(){
    int n,digit,rem,flag=0;
    cout<<"enter the number :";
    cin>>n;
    cout<<"enter the digit :" ;
    cin>>digit;
    while(n!=0){
        rem=n%10;
        if(rem==digit){
            flag++;
        }
        n=n/10;
    }
    cout<<"the frequecy of "<<digit<<" == "<<flag;
    return 0;
}