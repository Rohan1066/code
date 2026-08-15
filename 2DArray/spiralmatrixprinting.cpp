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
    int max=arr[0][0];
    for(=0;i<n;i++){
        if(arr[i][i]>max){
            max=arr[i][i];
        }
    }
    cout<<"maximum value of diagonal :"<<max;
    return 0;

}