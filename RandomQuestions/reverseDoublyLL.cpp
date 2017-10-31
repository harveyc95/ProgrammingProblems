/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* reverseIter(Node* head)
{
    Node* curr = head;
    Node* next = nullptr;
    Node* prev = nullptr;
    while (curr != nullptr) {
        prev = curr;
        next = curr->next;
        curr->next = curr->prev;
        curr->prev = next;
        curr = next;
    }
    return prev;
}

Node* reverseRecurse(Node* head)
{
    if (head == nullptr)    return head;
    Node* tmp = head->next;
    head->next = head->prev;
    head->prev = tmp;
    if (head->prev == nullptr) {
        return head;
    }
    return Reverse(head->prev);
}