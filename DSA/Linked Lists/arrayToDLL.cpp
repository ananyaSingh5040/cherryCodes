// Node* constructDLL(vector<int>& arr) {
//     // code here
//     Node* head = new Node(arr[0]);
//     Node* mover = head;
//     for(int i =1;i<arr.size();i++)
//     {
//         Node* newNode = new Node(arr[i]);
//         newNode->prev = mover;
//         mover->next = newNode;
//         mover = newNode;
//     }
//     return head;
// }