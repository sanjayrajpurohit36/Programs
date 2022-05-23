/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/

class Queue {
	// Define the data members
    Node *head;
    Node * tail;
    int size;
   public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
        size = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return size;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        return size == 0; 
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        if(head == NULL) {
			Node *temp = new Node(data);
            temp -> next = NULL;
            head = temp;
            tail = temp;
        } else {
            Node *temp = new Node(data);
            tail -> next = temp;
            tail = temp;
        }
        size++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(head != NULL) {
            int data = head -> data;
            Node *delNode = head;
            head = head -> next;
            delete delNode;
            size--;
        	return data;
        } return -1;
    }

    int front() {
        // Implement the front() function
        if(head != NULL)
        	return head -> data;
    	else return -1;
    }
};