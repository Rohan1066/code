#include<iostream>
using namespace std;
int main(){
    string x="merge";
    string y="jack";
    string z=x;
    z.append(y);
    cout<<z;
    return 0;
}