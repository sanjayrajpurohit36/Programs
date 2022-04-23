/****************************************************************
    Insert a node in linked list at a given pos.

    
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
Node *insertNodeHelper ( Node *head, Node *ptr, int i, int ci = 0 ,int data = 0) {
    if(i == 0) {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    } else if(ci == i-1 && ptr != NULL) {
        Node *currentNode = ptr;
        Node *nextNode = ptr->next;
        
        // created new node
        Node *newNode = new Node(data);
        // now we need to connec newNode with next and current with newNode
        
        newNode -> next = nextNode;
        currentNode->next = newNode;
    } else if(ci != i-1 && ptr != NULL) {
        ptr = ptr->next;
        return insertNodeHelper(head, ptr, i, ++ci, data);
    } else ;
    return head;
}

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    /* 
    	Three cases will be there
 		1. insert at 0th index  
        2. insert at ith index
		3. insert at last index 
 	*/
    Node *tempPtr = head;
	head = insertNodeHelper(head, tempPtr, i, 0 ,data);
    return head;
}