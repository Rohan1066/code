#include<iostream>
using namespace std;
int main(){
    int sum=0,total,mnumber;
    int arr[6]={0,1,5,4,2};
    int n=5;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    total=(n*(n+1))/2;
    mnumber=total-sum;
cout<<mnumber;
return 0;
}