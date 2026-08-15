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
    //ut<<"the transpose of the matrix is :";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}