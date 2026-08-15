#include<iostream>
using namespace std;
int main(){
    int i,j,n,m,key,found=0;
    cout<<"enter the no.of rows :";
    cin>>m;
    cout<<"enter the no of column :";
    cin>>n;
    cout<<"enter the key element :";
    cin>>key;
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //cout<<"the new array is :";
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==key){
                cout<<"the indexx of key is :["<<i<<"]["<<j<<"]"<<endl;
                found=1;
            }
        }
    }
    if(found==0){
        cout<<"not found";
    }
    return 0;

}