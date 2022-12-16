class MyQueue {
public:
    stack<int> i,o;
    MyQueue() {
        
    }
    
    void push(int x) {
        i.push(x);
        
    }
    
    int pop() {
        int val = peek();
        o.pop();
        return val;
        
    }
    
    int peek() {
        if(o.empty()){
            while(i.empty()==false)
            {
                o.push(i.top());
                i.pop();
            }
        }
        return o.top();
        
    }
    
    bool empty() {
        return i.empty() && o.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */