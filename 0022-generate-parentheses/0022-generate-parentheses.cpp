class Solution {
public:
    vector<string> ans;
    void solve(int open, int close, int n, string current) {
        if (current.length() == 2 * n) {
            ans.push_back(current);
            return;
        }
        if (open < n) {
            current.push_back('(');
            solve(open + 1, close, n, current);
            current.pop_back();
        }
        if (close < open) {
            current.push_back(')');
            solve(open, close + 1, n, current);
            current.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(0, 0, n, "");
        return ans;
    }
};