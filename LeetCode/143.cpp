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
        ListNode* tail = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;

        ListNode* result = head;

        while(tail!=NULL)
        {
            cout<<"in";
            next = tail->next;
            tail->next = prev;
            prev = tail;
            tail = next;
        }
        cout<<"out \n";
        tail = prev;
        cout<<tail->val<<" hkj \n";
        while(tail!=NULL && head!=NULL)
        {
            result->next = tail;
            result = result->next;
            cout<<result->val<<"\n";
            tail = tail->next;

            result->next = head;
            result = result->next;
            cout<<result->val<<"\n";
            head = head->next;
        }

    }
};

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
