
/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
    Node *one, *two;
    if(head == NULL)
        return 0;
    one  = head;
    two = head;
    while(true) {
        one = one->next;
        if(two->next != NULL)
            two = two->next->next;
        else
            return 0;
        if(one == NULL || two == NULL)
            return 0;
        if(one == two)
            return 1;
    }
}
