// 3536. Maximum Product of Two Digits

class Solution {
public:
    int maxProduct(int n) {
        string s = to_string(n);
        int size = s.size();
        sort(s.begin(), s.end());

        int ans = (s[size-2] - '0') * (s[size-1] - '0');
        return ans;
    }
};