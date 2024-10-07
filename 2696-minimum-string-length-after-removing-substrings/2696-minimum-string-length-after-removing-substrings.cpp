class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        int counter = s.length();
        for (int i = 0; i < s.length(); i++) {
         if(s[i]=='B' && !st.empty() && st.top()=='A'){
            st.pop();
            counter -=2;
        }else if(s[i]=='D' && !st.empty() && st.top()=='C'){
            st.pop();
            counter -=2;
        }else{
            st.push(s[i]);
        }
      }
      return counter;
    }
};