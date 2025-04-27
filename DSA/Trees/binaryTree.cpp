#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* buildTree(Node* root)
{
    cout<<"Enter data: ";
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1) return NULL;
    cout<<"Enter data to insert on the left of "<<data<<" :"<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data to insert on the right of "<<data<<" :"<<endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root); // level 0 - that is root node
    q.push(NULL); // seperator

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        
        if(temp==NULL) // purana level completed its traversal
        {
            cout<<endl;
            if(!q.empty()) // queue still has child nodes
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
}
void buildFromLevelOrder(Node* &root)
{
    queue<Node*> q;
    cout<<"Enter data for root node: "<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        
        cout<<"Enter data for left of node "<<temp->data<<" :"<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!= -1)
        {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter data for right of node "<<temp->data<<" :"<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!= -1)
        {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
}
void Inorder(Node* root)
{
    // base case:
    if(root==NULL)
    return;

    // LNR
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
}
void Preorder(Node* root)
{
    //base case
    if(root == NULL)
    return;

    // NLR
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node* root)
{
    // base case
    if(root==NULL)
    return;

    // LRN
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    Node* root = NULL;
    // Creating a tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);
    cout<<endl<<"Level order traversal: "<<endl;
    levelOrderTraversal(root);
    cout<<"Inorder traversal: "<<endl;
    Inorder(root);
    cout<<endl<<"Preorder traversal: "<<endl;
    Preorder(root);
    cout<<endl<<"Postorder traversal: "<<endl;
    Postorder(root);
    // buildFromLevelOrder(root); ->Building tree from level order traversal!
    // levelOrderTraversal(root);
    return 0;
}