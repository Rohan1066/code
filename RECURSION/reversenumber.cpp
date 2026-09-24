#include<iostream>
using namespace std;
int reverse(int n,int rev=0){
    if(n==0){
        return rev;
    }
    int rem=n%10;
    return reverse(n/10,rev*10+rem);
}
int main(){
    int n;
    cout<<"enter number :";
    cin>>n;
    cout<<reverse(n);
}