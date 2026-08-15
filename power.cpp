#include<iostream>
using namespace std;
int main(){
    int x,n,result=1,i;
    cout<<"enter the value of x and n";
    cin>>x;
    cin>>n;
    for(i=1;i<=n;i++){
        result=result*x;
    }
cout<<result;
return 0;
}