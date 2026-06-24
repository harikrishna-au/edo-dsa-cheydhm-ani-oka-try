class Solution {
 public:
  int evalRPN(vector<string>& tokens) {
    stack<int> st;
    int ans;
    for (const auto& s : tokens) {
      if (s != "+" && s != "-" && s != "*" && s != "/") {
        st.push(stoi(s));
      } else {
        int ops;
        int val1 = st.top();
        st.pop();
        int val2 = st.top();
        st.pop();
        if (s == "+") {
          st.push(val1 + val2);
        } else if (s == "-") {
          st.push(val2 - val1);
        } else if (s == "*") {
          st.push(val1 * val2);
        } else {
          st.push(val2 / val1);
        }
      }
    }
    ans = st.top();
    return ans;
  }
};
