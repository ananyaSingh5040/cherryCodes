#include <bits/stdc++.h>
using namespace std;
void deleteMiddleElement(stack<int> &s, int count, int n)
{
    if (count == n / 2)
    {
        s.pop();
        return;
    }

    int num = s.top();
    s.pop();

    deleteMiddleElement(s, count + 1, n);
    s.push(num);
}
int main()
{
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(8);
    s.push(9);
    int n = s.size();
    int count = 0;
    deleteMiddleElement(s, count, n);
   while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
    return 0;
}