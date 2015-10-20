
/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    int i = 0;
    if(position == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    else {
        Node *newNode = head;
        for(int i = 1; i < position; i++) {
            newNode = newNode->next;
        }
        Node *temp = newNode->next;
        newNode->next = newNode->next->next;
        delete temp;
        return head;
    }
}
