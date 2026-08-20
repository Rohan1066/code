#include<iostream>
using namespace std;
int main(){
    string s="WILLIAM";
    for(auto x:s){
        cout<<(char)tolower (x);
    }
    return 0;
}