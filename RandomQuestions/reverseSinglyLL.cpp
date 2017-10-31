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
Node* reverseIter(Node *head)
{
    Node* curr = head;
    Node* prev = nullptr;
    Node* next = nullptr;
    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* reverseHelper(Node* prev, Node* curr) {
    if (curr == nullptr)    return prev;
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    return reverseHelper(prev, curr);
}

Node* Reverse(Node *head)
{
    return reverseHelper(nullptr, head);
}