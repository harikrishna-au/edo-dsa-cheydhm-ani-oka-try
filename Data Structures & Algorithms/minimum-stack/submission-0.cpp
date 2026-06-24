class MinStack {
 public:
  stack<int> st;
  stack<int> minst;
  MinStack() {}

  void push(int val) {
    // i need to push all the elements to the stack like i can have the 2 stacks like a min stack
    // and normal stack
    st.push(val);
    if (minst.empty() || minst.top() >= val) {
      minst.push(val);
    }
  }

  void pop() {
    int i;

    if (!st.empty()) {
      i = st.top();
      st.pop();
    }
    if(minst.top()==i){
        minst.pop();
    }
  }

  int top() { return st.top(); }

  int getMin() { return minst.top(); }
};
