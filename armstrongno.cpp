#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,rem,digit=0,result=0;
    cout<<"enter the number:";
    cin>>n;
    while(n!=0){
        digit=digit+1;
        n=n/10;
    }
    while(n!=0){
        rem=n%10;
        result=result+pow(rem,digit);
        n=n/10;
    }
    if(result==n)
        cout<<n<<" is armstrong";
    else
        cout<<n<<"is not is not";
    
    return 0;

}