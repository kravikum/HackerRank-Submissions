
/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if (head == NULL) {
        return head;
    }
    Node *temp = head, *newHead;
    while(true) {
        Node *t = temp->next;
        temp->next = temp->prev;
        temp->prev = t;
        if(t == NULL)
            return temp;
        temp = t;
    }
}
