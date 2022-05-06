/*
    Implement a stack using linked list
    Following is the structure of the node class 
*/ 
class Node {
    public :
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class Stack {
	// Define the data members
    Node *head;
    Node *tail;
    int nextIndex = 0;
    
    
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        tail = NULL;
        nextIndex = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return nextIndex;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        return nextIndex == 0;
    }

    void push(int element) {
        // Implement the push() function
        // no overflow considiton will be there
        if(head == NULL) {
            Node *newNode = new Node(element);
            head = newNode;
            tail = newNode;
        } else {
            Node *newNode = new Node(element);
            tail -> next = newNode;
            tail = newNode;
        }
        nextIndex++;
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL) {
            return -1;
        }
        
        if(head -> next == NULL) {
            Node *delNode = head;
        	int deletedElement = head -> data;
        	delete delNode;
            head = NULL;
            tail = NULL;
            nextIndex--;
            return deletedElement;
            
        }
        Node *itr = head, *delNode = head;
        while(delNode -> next != NULL) {
            if(delNode -> next -> next == NULL) 
                itr = delNode;
            delNode = delNode -> next;
            
        }
        itr -> next = NULL;
        int deletedElement = delNode -> data;
        delete delNode;
        tail = itr;
        nextIndex--;
        return deletedElement;
    }

    int top() {
        // Implement the top() function
        if(head == NULL) return -1;
        return tail -> data;
    }
};