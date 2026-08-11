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
    void reorderList(ListNode* head) {

        // 1. find end of first half
        ListNode *slow = head, *fast = head;
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 2. split
        ListNode* second = slow->next;
        slow->next = nullptr;

        // 3. reverse second half
        ListNode* prev = nullptr;
        while (second) {
            ListNode* nxt = second->next;
            second->next = prev;
            prev = second;
            second = nxt;
        }

        // 4. weave
        ListNode* first = head;
        while (first and prev) {
            ListNode* n1 = first->next;
            ListNode* n2 = prev->next;

            first->next = prev;
            prev->next = n1;

            first = n1;
            prev = n2;
        }
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



