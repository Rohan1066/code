#include<iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    int n=6,temp;
    //int a[n];
    temp=a[n-1];
    for(int i=n-1;i>=0;i--){
        a[i+1]=a[i];
    }
// for(int i=0;i<n;i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
a[0]=temp;
cout<<"new array is :";
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
 return 0;
 }