#include<iostream>
using namespace std;
void subsequence(string str,string ans,int i,int &count,int k){
    if(i==str.length()){
        if(ans.length()==k){
        cout<<ans<<endl;
        count++;
        }
         return;
    }
    subsequence(str,ans,i+1,count,k);
    subsequence(str,ans+str[i],i+1,count,k);
}
int main(){
    string str;
    cin>>str;
    int count=0;
    int k;
    cout<<"length of k";
    cin>>k;
    subsequence(str,"",0,count,k);
    cout<<"total subsequence="<<count<<endl;
    return 0;
}