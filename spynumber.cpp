#include<iostream>
using namespace std;
int main(){
    int n,sum=0,product=1,rem;
    cout<<"enter the  number :";
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    if(sum==product)
    cout<<"the number is spy number";
    else
    cout<<"the number is not spy number";
}