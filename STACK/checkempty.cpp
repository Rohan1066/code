#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    //st.push(30);
    if(st.empty()){
        cout<<"stack is empty "<<endl;
    }
    else{
        cout<<"stack is not empty ";
    }
    return 0;
}