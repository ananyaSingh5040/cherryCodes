#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    int *p = &i;
    // copy Pointer:
    int *copy_pointer = p;
    cout << p << "-" << copy_pointer << endl;
    cout << *p << "-" << *copy_pointer << endl;
    // Address increment: mostly used for iterating an array.
    int num = 9;
    int *t = &num;
    cout << t << endl;
    t = t + 1;
    cout << t << endl;
    return 0;
}