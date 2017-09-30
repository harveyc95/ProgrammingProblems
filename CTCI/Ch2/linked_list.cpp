struct Node {
     int data;
     struct Node *next;
}

Node* MergeLists(Node *headA, Node* headB)
{
    Node* merged = NULL;
    if (headA == NULL) return headB;
    if (headB == NULL) return headA;
    
    if (headA->data < headB->data) {
        merged = headA;
        merged->next = MergeLists(headA->next, headB);
    } else {
        merged = headB;
        merged->next = MergeLists(headA, headB->next);
    }
    return merged;
}

