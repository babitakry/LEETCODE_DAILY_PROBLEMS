//232. Implement Queue using Stacks

#include<bits/stdc++.h>
using namespace std;

class MyQueue {
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int del_front;
        del_front = s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return del_front;
    }
    
    int peek() {
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int front_element;
        front_element = s2.top();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return front_element;
    }
    
    bool empty() {
        return s1.empty();
    }
};

int main()
{
    MyQueue m;

    return 0;
}