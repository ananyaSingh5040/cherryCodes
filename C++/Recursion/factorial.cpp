// Online C++ compiler to run C++ program online
// Print factorial of n: (n* (n-1));
#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << factorial(n);

    return 0;
}