#include <iostream>
using namespace std;

class LinkedListNode
{

    // LinkedListNode class datatype ka pointer to store address of next node.
public:
    int data;
    LinkedListNode *next;

    // Constructor to assign values.
    LinkedListNode(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertAtHead(LinkedListNode *&head, int data)
{
    // creation of new node.
    LinkedListNode *temp = new LinkedListNode(data);
    temp->next = head;
    head = temp;
}
// void insertAtTail(LinkedListNode *&head, int data)
// {
//     LinkedListNode *new_node = new LinkedListNode(data);
//     LinkedListNode *temp = head;
//     while(temp->next!=NULL)
//     {
//         temp= temp->next;
//     }
//     temp->next = new_node;

// }
void insertAtTail(LinkedListNode *&tail, int data)
{
     LinkedListNode *temp = new LinkedListNode(data);
     tail->next= temp;
     tail= tail->next;
}
void insertAtPosition(LinkedListNode *&head, LinkedListNode *&tail,  int position, int data)
{
    //starting insertion:
    if(position==1)
    {
        insertAtHead(head,data);
        return;
    }
    
   LinkedListNode* temp= head;
   int count = 1; //that is abhi head pe hai.
   while(count < position-1)
   {
     temp= temp->next;
     count++;
   }
   if(temp->next==NULL)
   {
    insertAtTail(tail,data);
    return;
   }
   else{
    LinkedListNode *nodeToInsert = new LinkedListNode(data);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
   }
}
void reverseList(LinkedListNode* &head){

    LinkedListNode* prev= NULL;
    LinkedListNode* curr= head;
    LinkedListNode* forward= NULL;
    while(curr!=NULL)
    {   
        forward= curr->next;
        curr->next = prev;
        prev= curr;
        curr= forward;
         
        
    }
    

}
void printList(LinkedListNode *&head)
{

    LinkedListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

int main()
{

    LinkedListNode *node1 = new LinkedListNode(10); // object banaya.
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointing to new node.
    LinkedListNode *head = node1;
    LinkedListNode *tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 18);
    insertAtTail(tail, 39);
    insertAtTail(tail, 45);
    insertAtTail(tail, 22);
    insertAtPosition(head,tail, 3,8);
    printList(head);
    reverseList(head);
    printList(head);
}