//876. Middle of the Linked List
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp,*p;
        int mid=0,count=0;
        temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        p=head;
        mid=count/2;
        while(mid)
        {
            p=p->next;
            mid--;
        }
        return p;
    }
};