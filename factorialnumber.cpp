#include<iostream>
using namespace std;
int main(){
    int i,fact=1,n;
    cout<<"enter the number :";
    cin>>n;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"the factorial of number is " <<
    fact;
    return 0;
}