class MinStack {
public:
    stack<int> stack1;
    stack<int> stack2;
    MinStack() {
        stack2.push(INT_MAX);
    }
    
    void push(int val) {
        stack1.push(val);
        stack2.push(min(val,stack2.top()));
    }
    
    void pop() {
        stack1.pop();
        stack2.pop();
    }
    
    int top() {
        return stack1.top();
    }
    
    int getMin() {
        return stack2.top();
    }
};