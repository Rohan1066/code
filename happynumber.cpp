#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<<"enter the number :";
    cin>>n;
    while(n!=1 && n!=4){
        sum=0;
    while(n!=0){
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
    n=sum;
}
if(n==1)
cout<<"no is a happy number";
else
cout<<"no is not happy number";
return 0;
}