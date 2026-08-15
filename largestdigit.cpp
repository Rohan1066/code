#include<iostream>
using namespace std;
int main(){
    int max=0,n=56287;
    int rem;
    while(n>0){
        rem=n%10;
    if(max<=rem){
        max=rem;
    }
        n=n/10;
}
    cout<< max <<endl;
    return 0;
}