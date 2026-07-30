// 3014. Minimum Number of Pushes to Type Word I

#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int minimumPushes(string word)
    {
        unordered_map<char, int> mpp;

        for (int i = 0; i < word.size(); i++)
        {
            mpp[word[i]]++;
        }

        vector<int> temp;
        for (auto it : mpp)
        {
            temp.push_back(it.second);
        }

        sort(temp.begin(), temp.end(), greater<int>());

        int ans = 0, cnt = 0;

        for (int i = 0; i < temp.size(); i++)
        {
            cnt++;
            if (cnt <= 8)
            {
                ans += 1 * temp[i];
            }
            else if (cnt <= 16)
            {
                ans += 2 * temp[i];
            }
            else if (cnt <= 24)
            {
                ans += 3 * temp[i];
            }
            else
            {
                ans += 4 * temp[i];
            }
        }
        return ans;
    }
};