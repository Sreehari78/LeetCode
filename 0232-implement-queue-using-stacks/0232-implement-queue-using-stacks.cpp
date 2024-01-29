#include <stack>

class MyQueue {
private:
    std::stack<int> st1, st2;

public:
    MyQueue() {}

    void push(int x) {
        st1.push(x);
    }

    int pop() {
        if (st2.empty())
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }

        if (st2.empty()) return -1;

        int front = st2.top();
        st2.pop();
        return front;
    }

    int peek() {
        if (st2.empty())
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }

        if (st2.empty()) return -1;

        return st2.top();
    }

    bool empty() {
        return st1.empty() && st2.empty();
    }
};

// Example usage:
/*
int main() {
    MyQueue* obj = new MyQueue();
    obj->push(1);
    obj->push(2);
    int param_1 = obj->peek();
    int param_2 = obj->pop();
    bool param_3 = obj->empty();
    return 0;
}
*/
