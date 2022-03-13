class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (auto c : s) {
            if (c == '(' || c == '[' || c =='{') {
                p.push(c);
            } else if (p.size() == 0) {
                return false;
            } else if (c == ')' && p.top() != '(' || c == ']' && p.top() != '[' || c == '}' && p.top() != '{') {
                return false;
            } else {
                p.pop();
            }
        }
        return p.size() == 0;
        
    }
};