class MinStack {
private:
    stack<pair<int, int>> st;
    int minVal;

public:
    MinStack() { minVal = INT_MAX; }

    void push(int val) {
        if (st.size() > 0)
            minVal = st.top().second;
        else
            minVal = INT_MAX;

        minVal = min(minVal, val);
        st.push({val, minVal});
    }

    void pop() { st.pop(); }

    int top() { return st.top().first; }

    int getMin() { return st.top().second; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */