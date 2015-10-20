
/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
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
