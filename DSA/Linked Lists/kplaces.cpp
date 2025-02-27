// ListNode* getNode(ListNode* temp, int n)
// {
//     int cnt =1;
//     while(temp!=NULL)
//     {
//         if(cnt ==n) return temp;
//         cnt++;
//         temp = temp->next;
//     }
//     return temp;
// }
//     ListNode* rotateRight(ListNode* head, int k) {

//         if(head==NULL|| k==0) return head;
//         ListNode* temp = head;
//         int n=1;
//         while(temp->next!=NULL)
//         {
//             temp = temp->next;
//             n++;
//         }
//          k = k%n;
//         if(k==0) return head;

//         temp->next = head;
//         ListNode * newLastNode = getNode(head, n-k);
//         head = newLastNode->next;
//         newLastNode->next = NULL;
//         return head;
        
        
//     }