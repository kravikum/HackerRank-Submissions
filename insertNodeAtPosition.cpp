
/*
  Insert Node at a given position in a linked list 
  The linked list will not be empty and position will always be valid
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node *ins = new Node;
    ins->data = data;
    ins->next = NULL;
    if(position == 0) {
        ins->next = head;
        return ins;
    }
    Node *temp = head;
    for(int i = 1; i < position; i++) {
        temp = temp->next;
    }
    ins->next = temp->next;
    temp->next = ins;
    return head;
}
