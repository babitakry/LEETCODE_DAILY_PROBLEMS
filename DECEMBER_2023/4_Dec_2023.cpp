//2264. Largest 3-Same-Digit Number in String

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestGoodInteger(string num) {
        string s;
        string maxi="";
        int count=1;
        for(int i=0;i<num.size();i++){
            s=num.substr(i,3);
            
            if(s == "999" || s == "888" || s == "777" || s == "666" || s == "555" || s == "444" || s == "333" || s == "222" || s=="111" || s=="000")
            {

                 maxi=max(maxi,s);
                 
            }
           
        }
        return maxi;
    }
};

int main()
{
    Solution s;
    string num="3200014888";
    cout<<s.largestGoodInteger(num);
    return 0;
}
