//2962. Count Subarrays Where Max Element Appears at Least K Times

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi,nums[i]);
        }

        int l=0,r=0;
        long long count=0;
        int maxifreq = 0;
        for(r=0;r<nums.size();r++){
            if(nums[r] == maxi)
               maxifreq++;
            while(maxifreq >= k){
                if(nums[l] == maxi){
                    maxifreq--;
                }
                l++;
            }
            count = count + l;
        }
        return count;
    }
};

int main(){
    Solution s;
    vector<int> nums{1,3,2,3,3};
    int k=2;
    cout<<s.countSubarrays(nums,k);
}