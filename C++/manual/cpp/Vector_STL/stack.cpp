#include<iostream>
#include<stack>
using namespace std;
void explianStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout<<st.top()<<endl;
    st.pop();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    cout<<st.empty();
}
int main(){
    explianStack();
    return 0;
}