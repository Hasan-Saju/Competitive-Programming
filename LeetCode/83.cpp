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
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode* temp=head;

        while(temp && temp->next)
        {
            if(temp->val == temp->next->val)
                temp->next = temp->next->next;
            else
                temp = temp->next;
        }
        return head;
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
    int arr1[] = {1,1,2,3,3,4,5,5,5};
    int arr2[] = {2, 4, 6, 8};

    ListNode* list1 = createList(arr1, 9);
    ListNode* list2 = createList(arr2, 4);

    // Merging the two sorted lists
    ListNode* mergedList = solution.deleteDuplicates(list1);

    // Printing the merged list
    cout << "Merged List: ";
    printList(mergedList);

    return 0;
}


