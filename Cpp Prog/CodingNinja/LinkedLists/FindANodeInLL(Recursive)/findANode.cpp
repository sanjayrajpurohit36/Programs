/****************************************************************
    Given a singly linked list of integers and an integer n, find and return the index for the first occurrence of 'n' in the linked list. -1 otherwise.
    Follow a recursive approach to solve this.
    
    Sample Input: 
        1
        3 4 5 2 6 1 9 -1
        100
    Sample Output: -1

    Sample Input: 
        2
        10 20010 30 400 600 -1
        20010
        100 200 300 400 9000 -34 -1
        -34
    Sample Output:
        1
        5
    
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

int findNodeRecHelper(Node *head, int n, int pos = 0) {
    if(head == NULL) return -1;
    if(head -> data == n) return pos;
    else {
        return findNodeRecHelper(head -> next, n, pos+1);
    }
} 

int findNodeRec(Node *head, int n)
{
	//Write your code here
    return findNodeRecHelper(head, n);
}