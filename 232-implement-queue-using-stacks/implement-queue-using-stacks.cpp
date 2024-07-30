class MyQueue {
private:
    stack<int> in,out;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        int x;
        if(!out.empty()){
            x=out.top();
            out.pop();
        }
        else{
            if(!in.empty()){
                while(!in.empty()){
                    out.push(in.top());
                    in.pop();
                }
                x=out.top();
                out.pop();
            }
        }
        return x;
    }
    
    int peek() {
        if(out.empty()){
            while (!in.empty()) {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
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