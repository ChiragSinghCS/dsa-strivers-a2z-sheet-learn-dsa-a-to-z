#include<iostream>
#include<stack>
#include<vector>
using namespace std;


class QueueStack {
public:
    stack<int> st;
    QueueStack() {
    }
    
    void push(int x) {
        int n = st.size();
        st.push(x);
        for(int i = 0; i<st.size(); i++){
            int p = st.top();
            st.push(p);
            st.pop();
        }
    }
    
    int pop() {
        int n = st.top();
        st.pop();
        return n;
    }
    
    int top() {
        return st.top();
    
    }
    
    bool isEmpty() {
        return st.empty();
    }
};