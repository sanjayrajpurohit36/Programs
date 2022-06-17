/*
    WAP to reverse a kLinkedList

    Hint: Think of the solution, as in the solution we need to repeat a particular
    step again and again so we can implement this using recursion as well.
    So, the below solution is implemented sol is implemented using recursion.
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
class Pair{
    public:
        Node *head;
        Node *tail;

        Pair() {
            head = NULL;
            tail = NULL;
        }
}Obj;

Pair reverse(Node *head) {
    Node *f = head->next, *b = head, *tf = head->next;
    if(head == NULL || head -> next == NULL) {
        Obj.head = head;
        Obj.tail = head;
        return Obj;
    }
    while (tf != NULL) {
        f = tf;
        tf = tf->next;
        f->next = b;
        b = f;
    }
    head->next = NULL;
    Obj.head = f;
    Obj.tail = head;
    head = f;
    return Obj;
}


Node *kReverse(Node *head, int K) {

    if(head == NULL || head -> next == NULL || K == 0 || K == 1) {
        return head;
    }

    Node *f = head, *b = head, *tf = head;
    int counter = 1;
    Node *nHead = NULL, *nTail = NULL;

    while(tf != NULL) {
        if(counter == K || tf -> next == NULL) {
            b = tf; //  back node = itr so, that I can jump to next node and set NULL after this element
            // setting counter to 1 and jumping to next node because after this b-> next will se set as NULL
            counter = 1;
            tf = tf->next;
            // breacking the K elements of linked list
            b->next = NULL;

            Pair obj = reverse(f);
            if(nHead == NULL) {
                nHead = obj.head;
                nTail = obj.tail;
            }
            else
            {
                // connecting the first reversed linked list to another
                nTail->next = obj.head;
                nTail = obj.tail;
            }
            f = tf;
            b = NULL;
            // recursive sol
            Node *reversedListHead = kReverse(f, K);
            nTail -> next = reversedListHead;
            return nHead;
        }

        if(tf && tf->next != NULL) {
            tf = tf->next;
            counter++;
        }
    }
}