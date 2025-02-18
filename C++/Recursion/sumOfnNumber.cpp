// Online C++ compiler to run C++ program online
// Print sum of first N numbers using recursion:
#include <iostream>
using namespace std;
void printSumOfNumbers(int i, int n, int &sum)
{
    if (i > n)
    {
        return;
    }
    else
    {
        sum = sum + i;
        printSumOfNumbers(i + 1, n, sum);
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int sum = 0;
    printSumOfNumbers(1, n, sum);
    cout << sum << endl;

    return 0;
}