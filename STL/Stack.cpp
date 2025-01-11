#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;

    st.push(1);
    st.push(2);
    st.push(3);

    // cout << "Top element: " << st.top() << endl;

    cout << "Size of stack 1: " << st.size() << endl;

    // st.pop();

    // cout << "Top element: " << st.top() << endl;

    // while(!st.empty()){
    //     cout << st.top() << " ";
    //     st.pop();
    // }
    // cout << endl;

    stack<int> st1;

    st1.swap(st);

    cout << "Stack 1 size: " << st.size() << endl;
    cout << "Stack 2 size: " << st1.size() << endl;

    return 0;
}