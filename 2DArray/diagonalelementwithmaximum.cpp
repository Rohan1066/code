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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(arr[i][j]>max){
                    max=arr[i][j];
                }
            }
        }
    }
    cout<<"maximum value of  Diagonal element :"<<max;
    return 0;

}