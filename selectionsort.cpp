#include<iostream>
using namespace std;
int main(){
    int i,j;
    int arr[]={64,25,12,22,11},minindex,swap;
    cout<<"the size of the given array :";
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    for(j=0;j<n-1;j++){
        minindex=j;
        for(i=j+1;i<n;i++){
            if(arr[i]<arr[minindex]){
                minindex=i;
            }
        }
        swap=arr[j];
        arr[j]=arr[minindex];
        arr[minindex]=swap;
    }
    cout<<"sorted array :";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}