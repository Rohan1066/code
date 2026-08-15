#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,total_sum=0;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++){
    cin>>arr[i];
    }
    for(i=0;i<n;i++){
        total_sum=total_sum+arr[i];
    }
    int flag=-1;
    int left_sum=0;
        for(i=0;i<n;i++){
            int right_sum=total_sum-left_sum-arr[i];
            if(left_sum==right_sum){
                flag=i;
                break;
            }
            left_sum=left_sum+arr[i];  
        }
        cout<<flag;
    return 0;
}