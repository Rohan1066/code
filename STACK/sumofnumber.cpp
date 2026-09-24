#include<iostream>
using namespace std;
int sumdigit(int n,int sum=0){
    if(n==0){
        return sum;
    }
    return sumdigit(n/10,sum+(n%10));
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    cout<<sumdigit(n);
    return 0;
}