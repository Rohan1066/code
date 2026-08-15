#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter no of rows :";
    cin>>n;
    //cout<<"enter no of column";
    //cin>>column;
    for(i=1;i<=n;i++){
        //cout<<"*";
        for(j=1;j<=n;j++){
            if(i==1||i==n||j==1||j==n){
                cout<<"*";
            }
            else
            {
            cout<<" ";
            }
        }
            cout<<"\n";
    }
    return 0;
}