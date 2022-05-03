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
        *c1,*c2 will be at the swapping nodes
        *p1,*p2 will be the nodes previous to the nodes c1 and c2
*****************************************************************/

#include <cstdlib>
Node *swapNodes(Node *head, int i, int j)
{
	//Write your code here
    if(i == j) return head;
    else if( (i == 0 || j == 0) && (abs(i-j) ==1) ) { // first two nodes of the list
		Node *itr = head;
        Node *p1 = head -> next -> next, *c1 = head, *c2 = head -> next;

        c1 -> next = p1;
        c2 -> next = c1;
        head = c2;
        
    }
    else if(abs(i - j ) == 1) { // any two adjacent nodes which are not the first two nodes of the list
        Node *itr = head;
        Node *p1 = NULL, *p2 = NULL, *c1 = NULL, *c2 = NULL;
        /*
        	Always considering i is smalller than j
            as we dont know which one is bigger
        */
        if(i > j) { 
            int temp = i;
            i = j;
            j = temp;
        }
        int counter = 0;
        while(itr != NULL) {
            if(counter == i-1)
                p1 = itr;
            if(counter == i) 
                c1 = itr;
            if(counter == j)
                c2 = itr;
            if(counter == j+1) 
                p2 = itr;
            counter++;
            itr = itr -> next;
        }
        p1 -> next = c2;
        c2 -> next = c1;
        c1 -> next = p2;
    }
    else if(i==0 || j == 0 && abs(i-j)!=1) { // any one node is the first node other node can be any one
        Node *itr = head;
        Node *p1 = head -> next, *p2 = NULL, *c1 = head, *c2 = NULL;
        int no = i == 0 ? j : i;
        int counter = 0;
        while(itr != NULL) {
            if(counter == no - 1)  // before the node
                p2 = itr;
          	if(counter == no)  // actual node
            	c2 = itr;
            counter++;
            itr = itr -> next;
        }
 
        c1 -> next = c2 -> next;
        c2 -> next = p1;
        p2 -> next = c1;
        head = c2; 
    }
    else {
        Node *itr = head;
        Node *p1 = NULL, *p2 = NULL, *c1 = NULL, *c2 = NULL, *c1Next = NULL;
        int counter = 0;
        if(i > j) {
            int temp = i;
            i = j;
            j = temp;
        }
        while(itr != NULL) {
            if(counter == i-1) {
                p1 = itr;
            } 
            if(counter == i) {
            	c1 = itr;  
                c1Next = c1 -> next;
            }
            if(counter == j-1) {
                p2 = itr;
            }
            if(counter == j) {
                c2 = itr;
            }
            itr = itr -> next;
            counter++;
        }
       	c1-> next = c2 -> next;
       	c2 -> next = c1Next;
       	p2-> next = c1;
    	p1->next = c2;
    }
    return head;
}