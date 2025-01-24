#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data= data;
        this->next= NULL;
    }

};
void insertNode(Node* &tail,int data)
{
    if(tail==NULL)
    {
    Node* node1= new Node(data);
    tail= node1;
    tail->next= tail;
    return;
    }
    Node* new_node= new Node(data);
    new_node->next= tail->next;
    tail->next = new_node;


}
void printList(Node* &tail)
{
    Node* temp = tail;
    while(temp->next!=temp)
    {
        cout<<temp->data<<"->"<<endl;
    }
    cout<<temp->data<<"->"<<endl;
}
int main()
{
    Node* tail= NULL;
   insertNode(tail,30);
   insertNode(tail,50);
   printList(tail);
    return 0;
}
