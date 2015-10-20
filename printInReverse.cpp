
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL) {
        return head;
    }
    Node *prev, *next, *temp;
    temp = head;
    prev = temp;
    next = temp->next;
    prev->next = NULL;
    while(next != NULL) {
       temp = next;
       next = next->next;
       temp->next = prev;
       prev = temp;
    }
    return prev;
}
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *newHead;
    newHead = Reverse(head);
    while(newHead != NULL) {
        std::cout<<newHead->data<<"\n";
        newHead = newHead->next;
    }
}
