#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* half = head;
        ListNode* prev = NULL;
        while(temp->next && temp->next->next)
        {
            temp = temp->next->next;
            half = half->next;
        }

        if(temp->next)
        half = half->next;

        while(half!=NULL)
        {
            temp = half->next;
            half->next = prev;
            prev = half;
            half = temp;
        }
        half = prev;

        while(head && half)
        {
            temp = head->next;
            prev = half->next;

            head->next = half;
            half->next = temp;

            head = temp;
            half = prev;

        }
        if(head && head->next)head->next = NULL;
    }
};
//1 2 3
//5 4
//1 5 2 4 3
//
//1 2
//4 3
//
//1 4 2 3

// Helper function to create a linked list from an array
ListNode* createList(int arr[], int size) {
    if (size == 0) return nullptr;
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (int i = 1; i < size; ++i) {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }
    return head;
}

// Helper function to print the linked list
void printList(ListNode* node) {
    while (node != nullptr) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Solution solution;

    // Creating two sample sorted linked lists
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};

    ListNode* list1 = createList(arr1, 4);
    ListNode* list2 = createList(arr2, 4);

    // Merging the two sorted lists
    //ListNode* reorderList =
    solution.reorderList(list1);

    // Printing the merged list
    cout << "reorderList: ";
    //printList(reorderList);

    return 0;
}

