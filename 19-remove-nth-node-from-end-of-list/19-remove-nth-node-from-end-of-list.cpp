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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode *temp=head;
        // int c=0;
        // ListNode *ans=head;
        // while(temp!=nullptr)
        // {
        //     c++;
        //     temp=temp->next;
        // }
        // if(c==1)
        //     return nullptr;
        // cout<<c<<endl;
        // c-=n;
        // cout<<c<<endl;
        // if(c==1)
        //     return head->next;
        // int k=1;
        // while(ans!=nullptr)
        // {
        //     if(k==c)
        //         // return head;
        //     {
        //         // ans=head;
        //         ans->next=ans->next->next;
        //         break;
        //     }
        //     k++;
        //     ans=ans->next;
        // }
        // return head;
        
        ListNode *temp=new ListNode();
        temp->next=head;
        ListNode *fast=temp;
        ListNode *slow=temp;
        
        
        for(int i=1;i<=n;++i)
        {
            fast=fast->next;
            
            
        }
        
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
            
        }
        slow->next=slow->next->next;
        
        return temp->next;
    }
};