//857. Minimum Cost to Hire K Workers

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        vector<pair<double,int>> workers;

        for(int i=0;i<quality.size();i++){
            workers.push_back({(double)wage[i]/quality[i],quality[i]});
        }

        sort(workers.begin(),workers.end());
        double qSum = 0, res = DBL_MAX;

        priority_queue<int> pq;

        for(auto worker:workers){
            qSum += worker.second;
            pq.push(worker.second);
            if(pq.size() > k)
               qSum -= pq.top(),pq.pop();
            if(pq.size() == k)
               res = min(res,worker.first*qSum);
        }
        return res;
    }
};