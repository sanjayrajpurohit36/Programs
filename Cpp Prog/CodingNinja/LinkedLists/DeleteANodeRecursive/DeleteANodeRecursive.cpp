/****************************************************************
    Delete a node from linked list recursively

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
Node *deleteNodeHelper(Node *head, Node *ptr, int pos, int ci = 0)
{
    if(head == NULL) return head;
    else if(pos == 0) {
        Node *delNode = head;
        head = head -> next;
        delete delNode;
    } else if(ci == pos -1 && ptr -> next != NULL) {
        Node *currentNode = ptr;
        Node *delNode = ptr -> next;
        Node *nextNode = ptr -> next -> next;
        
        currentNode -> next = nextNode;
        delete delNode;
    } else if( ci != pos -1 && ptr != NULL) {
        	ptr = ptr-> next;
        	return deleteNodeHelper(head, ptr, pos, ++ci);
    } else return head;
    
    return head;
}

Node *deleteNodeRec(Node *head, int pos) {
//Write your code here
        return deleteNodeHelper(head, head, pos, 0);
}
