
/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
   Node *tempA, *tempB, *current;
    
    Node *newHead = new Node;
    if(headA == NULL)
        return headB;
    if(headB == NULL)
        return headA;
    
    if(headA->data < headB->data) {
       newHead->data = headA->data;
       newHead->next = NULL;
       tempA = headA->next;
       tempB = headB;
    }
    else {
       newHead->data = headB->data;
       newHead->next = NULL; 
       tempB = headB->next;
       tempA = headA;
    }
    current = newHead;
    while(tempA != NULL && tempB != NULL) {
        if(tempA->data < tempB->data) {
            current->next = new Node;
            current->next->data = tempA->data;
            current->next->next = NULL;
            tempA = tempA->next;
            current = current->next;
        }
        else {
            current->next = new Node;
            current->next->data = tempB->data;
            current->next->next = NULL;
            tempB = tempB->next;
            current = current->next;
        }
    }
    while(tempB != NULL) {
        current->next = new Node;
        current->next->data = tempB->data;
        current->next->next = NULL;
        tempB = tempB->next;
        current = current->next;
    }
    while(tempA != NULL) {
        current->next = new Node;
        current->next->data = tempA->data;
        current->next->next = NULL;
        tempA = tempA->next;
        current = current->next;
    }
    return newHead;
}
