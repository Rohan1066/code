#include<iostream>
using namespace std;
void mergearray(int a[],int n,int b[],int m,int c[],int i,int j,int k){
    if(i==n && j==m){
        return;
    }
        if(i == n) {
        c[k] = b[j];
        mergearray(a,n,b,m,c,i,j+1,k+1);
        return;
    }

    if(j == m) {
        c[k] = a[i];
        mergearray(a,n,b,m,c,i+1,j,k+1);
        return;
    }
    if(a[i]<b[j]){
        c[k]=a[i];
        mergearray(a,n,b,m,c,i+1,j,k+1);
    }
    else{
        c[k]=b[j];
        mergearray(a,n,b,m,c,i,j+1,k+1);
    }
}
int main(){
    int a[]={1,4,7};
    int b[]={3,5,7};
    int n=3;
    int m=3;
    int c[n+m];
    mergearray(a,n,b,m,c,0,0,0);
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    return 0;

}