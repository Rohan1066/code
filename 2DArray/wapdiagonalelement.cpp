#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
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
    //cout<<"the new array is :";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                cout<<"the diagonal element are :";
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;

}