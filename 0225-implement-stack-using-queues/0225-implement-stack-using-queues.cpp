class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.empty()) q.push(x);
        else{
            int s=q.size();
            q.push(x);
            while(s--)
            {
                int top = q.front();
                q.pop();
                q.push(top);
            }
        }
        
    }
    
    int pop() {
        int top = q.front();
        q.pop();
        return top;
        
    }
    
    int top() {
        return q.front();
        
    }
    
    bool empty() {
        if(q.empty()) return true;
        else return false;
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */