#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void countSubs(int index,string ds,string s,set<string> &st){
        if(index==s.length()){
            if(ds.length()==3 && ds[0]==ds[2])
               st.insert(ds);
            return;
        }
        ds += s[index];
        countSubs(index+1,ds,s,st);
        ds.pop_back();
        countSubs(index+1,ds,s,st);
    }
    
};
int main()
{
    Solution s1;
    string s="aabca";
    string ds="";
    set<string> st;
    s1.countSubs(0,ds,s,st);
    cout<<st.size();
    return 0;
}