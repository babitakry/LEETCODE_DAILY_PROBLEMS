// 3754. Concatenate Non-Zero Digits and Multiply by Sum I

class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);

        if(s.size() == 1 && s[0] == '0'){
            return 0;
        }
        string x = "";
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0')
                x += s[i];
            int num = s[i] - '0';
            sum += num;
        }
        long long res = stoll(x) * sum;
        return res;
    }
};