class MinStack {
public:
    stack<int> st;
    stack<int> miniSt;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(miniSt.empty() || val<=miniSt.top())
        miniSt.push(val);
    }
    
    void pop() {
        if(st.top() == miniSt.top()) miniSt.pop();
        if(!st.empty()) st.pop();
        
    }
    
    int top() {
    //    if(!st.empty())
        return st.top(); 
    }
    
    int getMin() {
       
        return miniSt.top();
    }
};
