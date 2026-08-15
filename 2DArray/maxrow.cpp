#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    int sum=0;
    int index=-1;
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
        int total=0;
        for(j=0;j<n;j++){
            total+=arr[i][j];
        if(total>sum){
            sum=total;
            index=i;

        }
      }
    }
    cout<<"the row number with max sum is "<<index<<endl;
    cout<<"max sum is :"<<sum<<endl;
    return 0;

}