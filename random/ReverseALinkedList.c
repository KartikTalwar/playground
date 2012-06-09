Node* reverse(Node *head, Node *previous)
{
    Node *temp;
    temp = head->next;
    head->next = previous;

    if(temp != NULL)
    {
        head = reverse(temp, head);
    }

    return head;
}