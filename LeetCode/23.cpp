#include <bits/stdc++.h>

using namespace std;

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution
{
public:
    ListNode* mergeKLists(vector<ListNode*>& lists)
    {
        if(lists.empty())
            return NULL;
        while(lists.size()>1)
        {
            lists.push_back(mergeTwoLists(lists[0], lists[1]));
            lists.erase(lists.begin());
            lists.erase(lists.begin());
        }
//        ListNode* result=NULL;
//        for(int i=0; i<lists.size(); i++)
//            result = mergeTwoLists(result,lists[i]);

        return lists.front();
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;

        if(list1->val <= list2->val)
        {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size)
{
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (int i = 1; i < size; ++i)
    {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(ListNode* node)
{
    while (node != nullptr)
    {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Solution solution;

    // Creating two sample sorted linked lists
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    ListNode* list1 = createList(arr1, 4);
    ListNode* list2 = createList(arr2, 4);

    // Merging the two sorted lists
    ListNode* mergedList = solution.mergeTwoLists(list1, list2);

    // Printing the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}


