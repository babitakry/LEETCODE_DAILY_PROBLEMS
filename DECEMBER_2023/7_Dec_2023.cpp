//1903. Largest Odd Number in String


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
      for(int i=num.size()-1;i>=0;i--){
        if(num[i]%2 == 0){
           num.pop_back();
           continue;
        }
        else
           return num;
      }
      return "";
    }
};

int main()
{
    Solution s;
    string num = "35427";
    cout<<s.largestOddNumber(num);   
    return 0;
}