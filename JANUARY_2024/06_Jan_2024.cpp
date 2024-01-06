//1235. Maximum Profit in Job Scheduling

#include <bits/stdc++.h>
using namespace std;

struct Job {
  int startTime;
  int endTime;
  int profit;
  Job(int startTime, int endTime, int profit)
      : startTime(startTime), endTime(endTime), profit(profit) {}
};

class Solution {
 public:
  int jobScheduling(vector<int>& startTime, vector<int>& endTime,
                    vector<int>& profit) {
    const int n = startTime.size();
    dp.resize(n + 1, -1); // Initialize dp with -1 for memoization
    vector<Job> jobs;

    for (int i = 0; i < n; ++i)
      jobs.emplace_back(startTime[i], endTime[i], profit[i]);

    // Sort jobs based on end times
    sort(jobs.begin(), jobs.end(), [](const auto& a, const auto& b) {
      return a.endTime < b.endTime;
    });

    // Will use binary search to find the first available startTime
    for (int i = 0; i < n; ++i)
      startTime[i] = jobs[i].startTime;

    return jobScheduling(jobs, startTime, 0);
  }

 private:
  vector<int> dp;

  int jobScheduling(const vector<Job>& jobs, const vector<int>& startTime,
                    int i) {
    if (i == jobs.size())
      return 0;
    if (dp[i] != -1)
      return dp[i];

    const int j = firstGreaterEqual(startTime, i + 1, jobs[i].endTime);
    const int pick = jobs[i].profit + jobScheduling(jobs, startTime, j);
    const int skip = jobScheduling(jobs, startTime, i + 1);
    return dp[i] = max(pick, skip);
  }

  int firstGreaterEqual(const vector<int>& A, int startFrom, int target) {
    auto it = lower_bound(A.begin() + startFrom, A.end(), target);
    return (it != A.end()) ? distance(A.begin(), it) : A.size();
  }
};


int main()
{
    Solution s;
    vector<int> startTime{1,2,3,4,6};
    vector<int> endTime{3,5,10,6,9};
    vector<int> profit{20,20,100,70,60};
    cout<<s.jobScheduling(startTime, endTime, profit);
    return 0;
}