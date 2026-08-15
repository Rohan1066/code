#include<iostream>
using namespace std;
int main(){
    int mid,key=6,ans=-1;
    int arr[]={4,5,6,7,8,9,1,2,3};
    cout<<"the size of the given array is :";
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int low=0,high=n-1;
    while(low<=high){
        mid=low+(high-low)/2;
        if(arr[mid]==key){
            ans=mid;
            break;
        }
        if(arr[low]<=arr[mid]){//left half is sorted....
        if(arr[low]<=key && key<arr[mid]){
            high=mid-1;
        }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<key && key<=arr[high]){
                low=mid=1;
            }
            else{
                high=mid-1;
            }
        }
    }
    cout<<"the index of key is :"<<ans;
    return 0;

}