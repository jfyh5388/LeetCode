#include<stdio.h>
// Definition for singly-linked list.
 struct ListNode {
     int val;
     struct ListNode *next;
 };
 
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
		int len=1;
        int i=0;
        struct ListNode * p=head;
        while(p->next!=NULL)
        {
            p=p->next;
            len++;
        }
        if(len==n)
        head=head->next;
        else
        {
            p=head;
            for(;i<len-n-1;i++)
            {
                p=p->next;
                
            }
            p->next=p->next->next;
        }
        return head;
}