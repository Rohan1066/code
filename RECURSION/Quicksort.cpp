#include<iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int i=low;
    int pivot=arr[high];
    for(int j=low;j<high;j++){
        if(arr[j]<pivot){
            swap(arr[i],arr[j]);
            i++;
        }
    }
    swap(arr[i],arr[high]);
    return i;
}
void quicksort(int arr[],int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
int main(){
    int arr[]={3,6,4,8,9,1};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}