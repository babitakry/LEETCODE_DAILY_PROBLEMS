// 3756. Concatenate Non-Zero Digits and Multiply by Sum II

class Solution {
public:
    const int MOD = 1e9 + 7;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        vector<int> ans;

        for (int i = 0; i < queries.size(); i++) {
            int pos = queries[i][0];
            int len = queries[i][1] - queries[i][0] + 1;
            string temp = s.substr(pos, len);

            if (temp.size() == 1 && temp[0] == '0') {
                ans.push_back(0);
                continue;
            }

            long long number = 0;
            long long sum = 0;

            for (int i = 0; i < temp.size(); i++) {
                int num = temp[i] - '0';

                if (num != 0) {
                    number = (number * 10 + num) % MOD;
                    sum += num;
                }
            }

            ans.push_back((number * (sum % MOD)) % MOD);
        }

        return ans;
    }
};