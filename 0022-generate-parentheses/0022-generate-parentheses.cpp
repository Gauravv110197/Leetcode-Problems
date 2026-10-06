class Solution {
public:

    void helper(vector<string>& ans, int n, int open, int close, string curr) {

        // Base case
        if (open == n && close == n) {
            ans.push_back(curr);
            return;
        }

        // Add '('
        if (open < n) {
            helper(ans, n, open + 1, close, curr + '(');
        }

        // Add ')'
        if (close < open) {
            helper(ans, n, open, close + 1, curr + ')');
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;

        helper(ans, n, 0, 0, "");

        return ans;
    }
};