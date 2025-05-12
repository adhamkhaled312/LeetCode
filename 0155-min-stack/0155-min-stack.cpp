class MinStack {
public:
    stack<int> stak;
    stack<int> minStack; 

    MinStack() {
        
    }
    
    void push(int val) {
        stak.push(val);
        val = min(val,minStack.empty()? val : minStack.top() );
        minStack.push(val);
    }
    
    void pop() {
        stak.pop();
        minStack.pop();
    }
    
    int top() {
        return stak.top();
    }
    
    int getMin() {
        return minStack.top();
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