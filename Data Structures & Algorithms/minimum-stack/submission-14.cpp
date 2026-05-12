#include <stack>
class MinStack {
public:

    stack<int> mainStack;
    stack<int> minStack; 
    MinStack() {
        
    }
    
    void push(int val) {
        mainStack.push(val);
        if(minStack.size() == 0) {minStack.push(val);}
        else if(minStack.size()  && (val < minStack.top() || val == minStack.top()))
        {
            minStack.push(val);
        }
    }
    
    void pop() {
        if(mainStack.top() == minStack.top())
        {
            minStack.pop();
        }
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};


