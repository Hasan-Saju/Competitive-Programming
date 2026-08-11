#include<bits/stdc++.h>
using namespace std;
//Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

class Solution
{
public:
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr)
        {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }

        return prev;
    }
};
int main()
{
    Solution obj;
    vector<int> vec = {1,2,3,4,5};

    // vector -> linked list
    ListNode* head = nullptr;
    for (int i = vec.size() - 1; i >= 0; i--)
        head = new ListNode(vec[i], head);   // build backwards, so order stays 1..5

    ListNode* res = obj.reverseList(head);

    // print
    for (ListNode* p = res; p; p = p->next)
        cout << p->val << " ";
}


