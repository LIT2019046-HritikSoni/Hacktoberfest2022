/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL)
            return head ;
        if(head->next==NULL)
            return head ;
        
        int x=0 ;
        ListNode* str=head ;
        while(str!=NULL)
        {
            str=str->next ;
            x++ ;
        }
        k=k%x ;
        while(k>0)
        {
            ListNode* temp=head ;
            while(temp->next!=NULL && temp->next->next!=NULL)
            {
                temp=temp->next ;
            }
            ListNode* ptr=temp->next ;
            temp->next=NULL;
            ptr->next=head ;
            head=ptr ;
            k-- ;
        }
        return head ;
    }
};
