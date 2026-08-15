#include<iostream>
using namespace std;
int main(){
    int n,i,fact=1,sum=0,original,rem;
    cout<<"enter the number :";
    cin>>n;
    original=n;
    while(n!=0){
        rem=n%10;
        fact=1;
    for(i=1;i<=rem;i++){
        fact=fact*i;
    }
    sum=sum+fact;
    n=n/10;
}
    if(sum==original)
    cout<<"the number is strong number";
    else
    cout<<"the number is not a strong number";
    return 0;
}