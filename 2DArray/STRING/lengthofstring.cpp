#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout<<"enter name :";
    getline(cin,name);
    cout<<"Name :"<<name<<" "<<endl;
    cout<<"length :"<<name.length();
    return 0;
}