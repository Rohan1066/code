#include<iostream>
using namespace std;
void Printnumber(int n){
    if(n==0){
        return;
    }
        cout<<n<<"";
          Printnumber(n-1);
}
int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
    Printnumber(n);
    return 0;
}
