#include<iostream>
#include<stack>
using namespace std;

class MinStack {
    public:
        stack<long long> st;
        long long mini;
        MinStack() {
            //constructor
        }

        void push(int value) {
            long long val = value;
            if(st.empty()){
                st.push(val);
                mini = val;
                return;
            }

            if(mini < val){
                st.push(val);
            }
            else{
                st.push(2*val-mini);
                mini = val;
            }
        }

        void pop() {
            if(st.empty()){
                return;
            }

            long long x = st.top();
            if(x>mini){
                st.pop();
            }
            else{
                mini = 2*mini - x;
                st.pop();
            }
        }

        int top() {
            if(st.empty()){
                return -1;
            }
            long long x = st.top();
            if(x > mini){
                return x;
            }
            else{
                return (mini);
            }
        }

        int getMin() {
            return mini;
        }
};