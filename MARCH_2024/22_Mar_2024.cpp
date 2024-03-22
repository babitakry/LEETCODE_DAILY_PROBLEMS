//234. Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        ListNode* ptr=head;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==ptr->val)
            {
                ptr=ptr->next;
            }
            else
               return false;
        }
        return true;
    }
};