/*
    Implement a stack using linked list
    Following is the structure of the node class 
    In the below implemented stack the push and pop operations are taking
    O(1) time.
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
    int nextIndex = 0;
    
    
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
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
        } else {
            Node *newNode = new Node(element);
            newNode -> next = head;
            head = newNode;
        }
        nextIndex++;
    }

    int pop() {
        // Implement the pop() function
        if(head == NULL) {
            return -1;
        }
        Node *delNode = head;
        int deletedElement = head -> data;
        delete delNode;
		head = head -> next;
        nextIndex--;
        return deletedElement;
    }

    int top() {
        // Implement the top() function
        if(head == NULL) return -1;
        return head -> data;
    }
};