class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> stack;

        for (char d : num) {
            while (!stack.empty() && k > 0 && stack.back() > d) {
                stack.pop_back();
                k--;
            }
            stack.push_back(d);
        }

        while (k > 0) {
            stack.pop_back();
            k--;
        }

        string result = "";
        for (char c : stack) {
            if (!(result.empty() && c == '0')) {
                result.push_back(c);
            }
        }

        return result.empty() ? "0" : result;
    }
};