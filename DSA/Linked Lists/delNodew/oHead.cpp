//Delete a node without having the access to Head
void deleteNode(ListNode* node) {

    ListNode* temp = node->next;
    node->val = temp->val;
    node->next= temp->next;
    delete temp;

    
}