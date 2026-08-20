#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string original, name;
    cout<<"enter string :";
    cin>>name;
    original=name;
    reverse(name.begin(),name.end());
    if(original==name){
        cout<<"the string is palindrom";
    }
    else{
        cout<<"the string is not palindrome";
    }
    return 0;
}