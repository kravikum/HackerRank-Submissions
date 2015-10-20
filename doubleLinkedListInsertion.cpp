/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev
   }
*/
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    if (head == NULL) {
        head = new Node;
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        return head;
    }
    Node *temp, *prev;
    temp = head->next;
    prev = head;
    if(head->data > data) {
        temp = new Node;
        temp->data = data;
        temp->prev = NULL;
        temp->next = head;
        head->prev = temp;
        return temp;
    }
    while(true) {
        if(temp == NULL) {
            temp = new Node;
            temp->data = data;
            temp->prev = prev;
            temp->next = NULL;
            prev->next = temp;
            return head;
        }
        if(temp->data > data) {
            Node *ins = new Node;
            ins->data = data;
            ins->prev = prev;
            ins->next = temp;
            prev->next = ins;
            temp->prev = ins;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
}
