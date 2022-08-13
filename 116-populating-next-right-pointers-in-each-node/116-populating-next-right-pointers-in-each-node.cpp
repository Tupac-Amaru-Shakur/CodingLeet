/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
//         if (root == NULL)
//             return root;
//         Node *p = root, *temp;
//         while (p)
//         {
//             temp = p;

//             while (temp && temp->left)
//             {
//                 temp->left->next = temp->right;
//                 if (temp->next)
//                 {
//                     temp->right->next = temp->next->left;
//                 }
//                 temp=temp->next;
                
//             }
//             p = p->left;
//         }
//         return root;
//     }
        
        Node *temp=root;
        while(temp!=NULL && temp->left!=NULL){
            Node *p=temp;
            
            while(true){
                p->left->next=p->right;
                
                if(p->next==NULL)break;
                
                p->right->next=p->next->left;
                
                p=p->next;
                
                
            }
            
            temp=temp->left;
            
            
            
            
        }
        
        return root;}
};

// int main()
// {
//     std::ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     return 0;
// }