//380. Insert Delete GetRandom O(1)

#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
    vector<int> v;
    unordered_map<int,int> mymap;
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mymap.find(val) != mymap.end())
           return false;
        
        v.push_back(val);
        mymap[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(mymap.find(val) == mymap.end())
           return false;
        
        auto it = mymap.find(val);
        v[it->second] = v.back();
        v.pop_back();
        mymap[v[it->second]]=it->second;
        mymap.erase(val);
        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

int main()
{
    RandomizedSet s;
    
    return 0;
}