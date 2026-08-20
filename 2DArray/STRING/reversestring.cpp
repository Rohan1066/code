#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string name="william Jack";
    reverse(name.begin(),name.end());
    cout<<name;
    return 0;
}