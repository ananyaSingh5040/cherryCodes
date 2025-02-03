#include <iostream>
using namespace std;
int main()
{
    int i=6;
    int * ptr1= &i;
    // Double Pointer: pointer pointing to a pointer.
    int ** ptr2= &ptr1;
    cout<<"Prinitng what's inside pointer 1: "<<ptr1<<" "<<*ptr2<<" "<<&i<<endl;
    cout<<"Prinitng address of pointer 1: "<<&ptr1<<" "<<ptr2<<endl;
    cout<<"Printing value of i : "<<*ptr1<<" "<<**ptr2<<endl;
    return 0;
}