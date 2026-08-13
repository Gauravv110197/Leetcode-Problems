class Solution {
public:
    bool isValid(string s) {
        stack<char> st; // Renamed to 'st' to avoid name collision with parameter 's'
        
        for (char c : s) {
            // Push opening brackets to the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } 
            // Handle closing brackets
            else {
                if (st.empty()) return false;
                
                char top = st.top();
                if ((c == ')' && top != '(') || 
                    (c == ']' && top != '[') || 
                    (c == '}' && top != '{')) {
                    return false;
                }
                
                st.pop(); // Remove the matched opening bracket
            }
        }
        
        return st.empty(); // If stack is empty, all brackets were validly matched
    }
};