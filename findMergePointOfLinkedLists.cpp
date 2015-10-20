
/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node *tempA = headA;
    Node *tempB = headB;
    while(true) {
        if(tempA == tempB) {
            return tempA->data;
        }
        if(tempB->next == NULL) {
            tempB = headB;
            tempA = tempA->next;
        }
        else {
            tempB = tempB->next;
        }
    }
}
