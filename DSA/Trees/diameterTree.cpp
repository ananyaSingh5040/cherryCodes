#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
int height(Node * node)
{
    if(node==NULL)
    return 0;
    int left = height(node->left);
    int right = height(node->right);
    return max(left,right) + 1;
}
int diameter(Node* node)
{
    if(node==NULL)
    return 0;
    int op1= diameter(node->left);
    int op2= diameter(node->right);
    int op3= height(node->left) + height(node->right) + 1;
    return max(op1, max(op2,op3));
}
int main()
{
    return 0;
}