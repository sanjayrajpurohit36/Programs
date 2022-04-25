/****************************************************************
    WAP to append last N nodes in a linked list to first.
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
        Constraints
            1 <= t <= 10^2
            0 <= M <= 10^5
            0 <= N < M
            Time Limit: 1sec
        
        Sample Input:
            2
            1 2 3 4 5 -1
            3
            10 20 30 40 50 60 -1
            5
        Sample Output: 
            3 4 5 1 2
            20 30 40 50 60 10
*****************************************************************/

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
    if(head == NULL || n == 0) return head;
    int len = 0;
    Node *Lp = head, *ptr = head, *itr = head;
    
    while(Lp!= NULL) {
        Lp = Lp -> next;
        len ++;
    }
    
    int i = 0;
    while(itr != NULL) {
        itr = itr -> next; // jump to next node
        i++; // increment i
        
        if(i == len - n - 1) {
            head = itr -> next;
            itr -> next = NULL;      
            itr = head;
        }
        
        if(itr -> next == NULL) {
            itr -> next = ptr;
            break;
        }
    }
    return head;
}