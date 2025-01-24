#include <iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data)
    {
        this->prev= NULL;
        this->data= data;
        this->next= NULL;
    }
};
void insertAtHead (Node*&head, Node*&tail,int data)
{
    if(head==NULL){
        Node* new_node = new Node(data);
        head= new_node;
        tail= new_node;
    }
    
    Node* new_node = new Node(data);
    head->prev= new_node;
    new_node->next= head;
    head= new_node;

}
void insertAtTail (Node* &tail ,Node* &head, int data)
{
     if(head==NULL){
        Node* new_node = new Node(data);
        head= new_node;
        tail= new_node;
    }
    else{
    Node* new_node= new Node(data);
    tail->next = new_node;
    new_node->prev= tail;
    tail= new_node;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int position,int data)
{
    if(position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    Node* temp= head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insertAtTail(tail,head,data);
        return;
    }
    
    Node* new_node = new Node(data);
    new_node->prev= temp;
    new_node->next = temp->next;
    temp->next->prev= new_node;
    temp->next= new_node;
    

}
void printNode(Node* &head){
    Node* temp= head;
     while (temp != NULL)
    {
        cout <<temp->data<<"->";
        temp = temp->next;
    }
    cout << " NULL" << endl;
}

int main()
{
    Node* head= NULL;
    Node* tail= NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,60);
    insertAtTail(tail,head,80);
    insertAtPosition(head,tail,3,30);
    insertAtPosition(head,tail,6,90);
    insertAtPosition(head,tail,1,5);
    printNode(head);
    cout<<"Head: "<<head->data<<endl<<"Tail: "<<tail->data<<endl;
    return 0;
}