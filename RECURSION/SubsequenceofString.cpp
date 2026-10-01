#include<iostream>
using namespace std;
void subsequence(string str,string ans,int i){
    if(i==str.length()){
        cout<<ans<<endl;
        return;
    }
    subsequence(str,ans,i+1);
    subsequence(str,ans+str[i],i+1);
}
int main(){
    string str="abc";
    subsequence(str,"",0);
    return 0;
}