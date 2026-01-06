class MinStack {
private:
    long long mini;        // store as long long to avoid overflow
    stack<long long> st;   // stack also stores long long

public:
    MinStack() {
        mini = LLONG_MAX;  // initialize properly
    }

    void push(int val) {
        if(st.empty()) {
            st.push(val);
            mini = val;
            return;
        }
        if(val >= mini) {
            st.push(val);
        } else {
            long long modify_val = 2LL * val - mini; // safe math
            st.push(modify_val);
            mini = val;
        }
    }

    void pop() {
        if(st.empty()) return;
        long long topVal = st.top();
        st.pop();
        if(topVal < mini) {
            mini = 2*mini - topVal; // safe because mini/topVal are long long
        }
        if(st.empty()) {
            mini = LLONG_MAX;
        }
    }

    int top() {
        if(st.empty()) return -1;
        long long topVal = st.top();
        if(topVal < mini) return (int)mini; // encoded value
        return (int)topVal;
    }

    int getMin() {
        if(st.empty()) return -1;
        return (int)mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */