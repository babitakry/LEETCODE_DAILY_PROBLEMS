//3121. Count the Number of Special Characters II

class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> lastOccSmall(26, -1);
        vector<int> firstOccCapital(26, -1);

        for (int i = 0; i < word.size(); i++) {
            if (islower(word[i])) {
                lastOccSmall[word[i] - 'a'] = i;
            } else {
                if (firstOccCapital[word[i] - 'A'] == -1) {
                    firstOccCapital[word[i] - 'A'] = i;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < 26; i++) {
            if (lastOccSmall[i] < firstOccCapital[i] && lastOccSmall[i] != -1 &&
                firstOccCapital[i] != -1) {
                count++;
            }
        }
        return count;
    }
};