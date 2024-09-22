class Solution {
public:
    int minAddToMakeValid(string s) {
    stack<char>st;
     for(int i=0;i<s.length();i++){
    char ch=s[i];
    if(ch=='('){
      st.push(ch);
    }
     else {
      // close braces hoga
      if (!st.empty() && st.top() == '('){
        st.pop();
      }
      else {
        st.push(ch);
      }
    }
  }
 int a=0;
  while(!st.empty()){
    
    if(st.top()=='('||st.top()==')'){
      a++;
    }
    st.pop();
  }
   return a; 
    }
};