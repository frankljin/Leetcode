class Solution {
public:
    int myAtoi(string s) {
        bool num_seen = false, sign_seen = false, is_neg = false;
        string num_str = "";
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && !num_seen && !sign_seen) {
                continue;
            } else if (s[i] == '+' && !num_seen && !sign_seen) {
                is_neg = false;
                sign_seen = true;
            } else if (s[i] == '-' && !num_seen && !sign_seen) {
                is_neg = true;
                sign_seen = true;
            } else if (s[i] >= '0' && s[i] <= '9' && !num_seen) {
                num_seen = true;
                num_str += s[i];
            } else if (s[i] >= '0' && s[i] <= '9') {
                num_str += s[i];
            } else {
                break;
            }
        }
        int n = num_str.length() - 1, idx = 0;
        unsigned int res = 0;
        while (n >= 0) {
            if ((res > INT_MAX / 10) || (res == INT_MAX / 10 && num_str[idx] - '0' > INT_MAX % 10)) {
                return !is_neg ? INT_MAX : INT_MIN;
            }
            res = (num_str[idx] - '0') + 10 * res;
            n--;
            idx++;
        }
        if (is_neg) res = res * -1;
        return res;
    }
};