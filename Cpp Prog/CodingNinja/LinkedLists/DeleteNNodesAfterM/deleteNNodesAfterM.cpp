/*
    You have been given a singly linked list of integers along with two integers, 'M,' and 'N.' Traverse the linked list such that you retain the 'M' nodes, then delete the next 'N' nodes. Continue the same until the end of the linked list.
    To put it in other words, in the given linked list, you need to delete N nodes after every M nodes.
    
    Note :
    No need to print the list, it has already been taken care. Only return the new head to the list.

    Sample Input : 
        1
        1 2 3 4 5 6 7 8 -1
        2 2

    Sample Output: 
        1 2 5 6
*/


/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head == NULL || M == 0) return NULL;
    int tm = 1, tn = 1;
    Node *temp = head;
    while(temp != NULL) {
        tm = 1; tn = 1;
        while(tm < M && temp != NULL) {
            temp = temp -> next;
            tm++;
        }
        if(temp == NULL || temp->next == NULL) break;
    	else {
            Node *itr = temp -> next;
            while(tn <= N && itr != NULL) {
                itr = itr -> next;
                tn++;
            }
            // even if itr has reached NULL stil we need to connect temp with null to complete the linked list
            temp -> next = itr;
            temp = itr;
            if(itr == NULL || itr-> next == NULL) break;
        }
    } 
    
    return head;
}