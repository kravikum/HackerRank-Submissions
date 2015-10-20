
/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    Node *temp;
    temp = head;
    if(head == NULL) {
        head = new Node;
        head->data = data;
        head->next = NULL;
        return head;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    temp->next = newNode;
    return head;
}
