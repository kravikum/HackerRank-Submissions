
/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node *current, *follow;
    current = head;
    follow = head->next;
    while(follow != NULL) {
        if(current->data == follow->data) {
            current->next = follow->next;
            Node *temp = follow;
            follow = follow->next;
            delete temp;
        }
        else {
            current = follow;
            follow = current->next;
        }
    }
    return head;
}
