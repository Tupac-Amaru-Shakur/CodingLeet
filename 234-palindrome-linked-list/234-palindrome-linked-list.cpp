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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr || head->next == nullptr){
            return true;
        }
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        
        slow->next=reverseList(slow->next);
        slow=slow->next;
        
        while(slow!=NULL){
            if(head->val!=slow->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
    
    ListNode *reverseList(ListNode *head){
        ListNode *pre=NULL, *post=NULL;
        
        while(head!=NULL){
            post=head->next;
            head->next=pre;pre=head;
            head=post;
        }
        return pre;
    }
};