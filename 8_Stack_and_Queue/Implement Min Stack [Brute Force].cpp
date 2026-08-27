#include<iostream>
#include<stack>
using namespace std;

class MinStack {
    public:

        stack<pair<int,int>> st;
        MinStack() {
            //constructor
        }

        void push(int value) {
            if(st.empty()){
                st.push({value,value});
            }
            else{
                st.push({value,min(value,st.top().second)});
            }
        }

        void pop() {
            return st.pop();
        }

        int top() {
            return st.top().first;
        }

        int getMin() {
            return st.top().second;
        }
};