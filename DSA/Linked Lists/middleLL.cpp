#include <iostream>
using namespace std;
class ListNode
{
public:
    int data;
    int next;
    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
ListNode *middleNode(ListNode *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *slow = head;
    ListNode *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}
int main()
{
    ListNode *head = new ListNode(10);

    return 0;
}