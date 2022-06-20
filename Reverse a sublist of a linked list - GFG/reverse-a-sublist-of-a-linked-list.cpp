// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


 // } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    
    Node* reverse(Node *head){
        if(head==NULL || head->next==NULL)
        return head;
        
        Node *temp=reverse(head->next);
        
        head->next->next=head;
        
        head->next=NULL;
        
        return temp;
    }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(n==m)
        return head;
        
         Node *revs = NULL, *revs_prev = NULL;
    Node *revend = NULL, *revend_next = NULL;
 
    // Find values of above pointers.
    int i = 1;
    Node* curr = head;
    while (curr && i <= n) {
        if (i < m)
            revs_prev = curr;
        if (i == m)
            revs = curr;
        if (i == n) {
            revend = curr;
            revend_next = curr->next;
        }
        curr = curr->next;
        i++;
    }
    revend->next = NULL;
    // Reverse linked list starting with revs.
    revend = reverse(revs);
    // If starting position was not head
    if (revs_prev)
        revs_prev->next = revend;
    // If starting position was head
    else
        head = revend;
    revs->next = revend_next;
    return head;
        
    }
};

// { Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}
  // } Driver Code Ends