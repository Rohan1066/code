#include<iostream>
#include<stack>
using namespace std;
int main(){
    int sum=0;
    stack<int>st;
    st.push(30);
    st.push(50);
    cout<<"size of the Stack "<< st.size() <<" "<<endl;
    while(!st.empty()){
        sum=sum+st.top();
        st.pop();
    }
    cout<<sum;
    return 0;
}