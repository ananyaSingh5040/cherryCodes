#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    
    //Constructor:
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;

    }
};
Node *buildTree(Node *root)
{
    cout << "Enter data: "<<endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new Node(data);
    cout <<"Enter for left of " << data;
    root->left = buildTree(root->left);
    cout <<"Enter for right of " << data;
    root->right = buildTree(root->right);
    return root;
}
int main()
{
    Node *root = NULL;
    root = buildTree(root);
    return 0;
}