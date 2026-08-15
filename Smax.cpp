#include<iostream>
using namespace std;
    int main() {
    int N,rem,smax=-1,max=-1;
    cin>>N;
    while(N!=0){
        rem=N%10;
        if(rem>max){
            smax=max;
            max=rem;}
        else if(rem>smax && rem!=max){
            smax=rem;
        }
        N=N/10;
    }
    cout<<smax;
    return 0;
}