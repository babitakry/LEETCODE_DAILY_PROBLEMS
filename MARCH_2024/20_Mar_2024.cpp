// 1669. Merge In Between Linked Lists

#include<bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp;
        ListNode* t;
        ListNode* p;
        temp=list1;
        while(b+1)
        {
           temp=temp->next;
           b--;
        }
           
         t=list1;
        while(a-1)
        {
           t=t->next;
           a--;
        }
        p=list2;   
        t->next=list2;
       
        while(p->next!=NULL)
           p=p->next;
        p->next=temp; 

        return list1;        
    }
};