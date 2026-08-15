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
    for(i=0;i<m;i++){
        for(j=n-1;j>=0;j--){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;

}