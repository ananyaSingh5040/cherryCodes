#include <iostream>
using namespace std;
int main()
{
    int i=7;
    int* ptr= &i;
    (*ptr)++;
    cout<<*ptr<<endl;
    //* is a derefernce operator.
    int* p= 0;
    p= &i;
    //way to initialize a pointer which is pointing to null value.
    *p= *p * 2;
    cout<<*p<<endl;
    return 0;
}