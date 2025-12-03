#include<bits/stdc++.h>
using namespace std;
void printStack(stack<int> st){ //pass by value to pass a copy
    cout<<"Stack elemenmts from top to bottom"<<endl;
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
} 
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(5);

    printStack(st);

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;

    st.push(6);
    st.push(5);
    st.push(10);

    printStack(st);

    return 0;
}