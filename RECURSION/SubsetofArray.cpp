#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],int n,vector<int>&ans,int i){
    if(i==n){
        for(int x:ans)
        cout<<x<<" ";
        cout<<endl;
        return;
    }
    subset(arr,n,ans,i+1);
    ans.push_back(arr[i]);
    subset(arr,n,ans,i+1);
    ans.pop_back();
}
int main(){
    int arr[]={2,3,45};
    int n=3;
    vector<int>ans;
    subset(arr,n,ans,0);
    return 0;
}