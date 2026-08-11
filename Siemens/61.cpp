class Solution
{
public:
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head==NULL)
            return NULL;
        if(head->next == NULL)
            return head;

        ListNode* oldTail=head;
        int n;

        for(n=1; oldTail->next!=NULL; n++)
            oldTail = oldTail->next;

        oldTail->next = head;

        ListNode* newTail = head;
        for(int i=1; i<n-(k%n); i++)
            newTail = newTail->next;

        ListNode* newHead = newTail->next;

        newTail->next = NULL;

        return newHead;

    }
};
