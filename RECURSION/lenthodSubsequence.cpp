#include<iostream>
using namespace std;
void subsequence(string str,string ans,int i,int &count){
    if(i==str.length()){
        //cout<<ans<<endl;
        count++;
        return;
    }
    subsequence(str,ans,i+1,count);
    subsequence(str,ans+str[i],i+1,count);
}
int main(){
    string str="abc";
    int count=0;
    subsequence(str,"",0,count);
    cout<<"total subsequence="<<count<<endl;
    return 0;
}