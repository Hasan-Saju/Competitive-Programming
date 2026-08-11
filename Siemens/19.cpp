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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int N = 0;
        ListNode* cur = head;
        while (cur != nullptr) {
            N++;
            cur = cur->next;
        }

        int removeIndex = N - n;
        if (removeIndex == 0) {
            return head->next;
        }

        cur = head;
        for (int i = 0; i < N - 1; i++) {
            if ((i + 1) == removeIndex) {
                cur->next = cur->next->next;
                break;
            }
            cur = cur->next;
        }
        return head;
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

    ListNode* res = obj.removeNthFromEnd(head,2);

    // print
    for (ListNode* p = res; p; p = p->next)
        cout << p->val << " ";
}



