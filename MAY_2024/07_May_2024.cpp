//2816. Double a Number Represented as a Linked List

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
    ListNode* doubleIt(ListNode* head) {
        ListNode *temp = head;
        stack<int> s1;
        stack<int> s2;

        while (temp != NULL) {
            s1.push(temp->val);
            temp = temp->next;
        }

        int carry = 0;
        while (!s1.empty()) {
            int doubledValue = s1.top() * 2 + carry;
            s2.push(doubledValue % 10);
            carry = doubledValue / 10;
            s1.pop();
        }

        if (carry > 0) {
            s2.push(carry);
        }

        ListNode *newHead = NULL;
        ListNode *prevNode = NULL;

        while (!s2.empty()) {
            ListNode *n = new ListNode(s2.top());
            s2.pop();
            n->next = NULL;

            if (prevNode) {
                prevNode->next = n;
            } else {
                newHead = n;
            }
            prevNode = n;
        }

        return newHead;
    }
};
