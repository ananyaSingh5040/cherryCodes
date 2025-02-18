// Online C++ compiler to run C++ program online
// Return fibonnaci series
#include <iostream>
using namespace std;
int fibonnaci(int n)
{
    if (n <= 1)
        return n;
    else
    {
        return fibonnaci(n - 1) + fibonnaci(n - 2);
    }
}

int main()
{
    cout << fibonnaci(8);

    return 0;
}