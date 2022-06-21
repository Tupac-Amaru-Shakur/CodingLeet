/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // if(node->next->next==nullptr)
        //     ListNode *temp=new ListNode(node->next->val);
       // *(node)=*(node->next);
        ListNode *temp=node->next;
       *node=*temp;
        delete temp;
        
        
    }
};