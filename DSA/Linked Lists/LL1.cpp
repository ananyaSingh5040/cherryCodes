#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// INSERT AT HEAD:
void InsertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        head = new Node(data);
        tail = head;
        return;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}
// INSERT AT TAIL:
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *lastNode = new Node(data);
    temp->next = lastNode;
    tail = lastNode;
}
// INSERT AT ANY POSITION:
void InsertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    Node *temp = head;
    int count = 1;
    if (position == 1)
    {
        InsertAtHead(head, tail, data);
        return;
    }
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        InsertAtTail(head, tail, data);
        return;
    }
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
// PRINT LINKED LIST
void printList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
// DELETE A NODE:
void deleteNode(Node *&head, Node *&tail, int position)
{

    // Deleting Head:
    if (position == 1)
    {
        Node *temp = head;
        head = head->next; //updating head
        temp->next = NULL;
        delete temp;
        return;
    }
    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    nodeToDelete->next = NULL;
    // Tail Updation:
    if (temp->next == NULL)
    {
        tail = temp;
    }
    delete nodeToDelete;
}
int main()
{
    // Node* node1 = new Node(10);
    // cout<<node1->data<<" -> ";
    // cout<<node1->next<<" ";
    Node *head = NULL;
    Node *tail = NULL;
    // Insertion at Head:
    InsertAtHead(head, tail, 10);
    InsertAtHead(head, tail, 12);
    InsertAtHead(head, tail, 15);
    // Insertion at Tail:
    InsertAtTail(head, tail, 20);
    InsertAtTail(head, tail, 30);
    // Insert at position:
    InsertAtPosition(head, tail, 3, 80);
    InsertAtPosition(head, tail, 1, 50);
    InsertAtPosition(head, tail, 7, 90);

    cout << "Before Deletion: " << endl;
    printList(head);

    deleteNode(head, tail, 1);
    cout << endl<< "After Deletion: " << endl;
    printList(head);
    cout << " Head: " << head->data;
    cout << " Tail: " << tail->data;

    return 0;
}