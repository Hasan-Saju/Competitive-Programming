#include <iostream>

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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        ListNode* tmp = head;
        int kount=0;
        int ind = 0;
        while(tmp)
        {
            tmp = tmp->next;
            kount++;
        }
        if(kount==1)
        {
            tmp = NULL;
            return tmp;
        }
        ind = kount-n;
        tmp=head;
        int i=0;
        ListNode* prev = NULL;
        while(tmp)
        {
            if(i==ind)
            {
                if(ind==0)
                {
                    head = tmp->next;
                    break;
                }
                prev->next = tmp->next;
            }
            prev = tmp;
            tmp = tmp->next;
            i++;
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
    int arr1[] = {1, 2, 3};
    int arr2[] = {2, 4, 6, 8};


    ListNode* list1 = createList(arr1, 3);
    ListNode* list2 = createList(arr2, 4);

    // Merging the two sorted lists
    ListNode* mergedList = solution.removeNthFromEnd(list1, 3);

    // Printing the merged list
    cout << "\nAns List: ";
    printList(mergedList);

    return 0;
}

