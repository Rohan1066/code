#include<iostream>
using namespace std;
int main(){
    int i,j,n,m,sum=0;
    cout<<"enter the no.of rows :";
    cin>>m;
    cout<<"enter the no of column :";
    cin>>n;
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<m;i++){
        sum=0;
        for(j=0;j<n;j++){
            sum=sum+arr[i][j];
        }
         cout<<sum<<" ";
    }
    //cout<<"the new array is :";
    // for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //     }
    //      cout<<sum<<" ";
    // }
    // //cout<<sum<<" ";
    return 0;
}