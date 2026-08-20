#include<iostream>
#include<string>
using namespace std;
int main(){
    int vowel=0, consonent=0;
    string str="extra effort";
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            vowel++;
        }
        else{
            consonent++;
        }
    }
        cout<<vowel<<endl;
        cout<<consonent;
    return 0;
}