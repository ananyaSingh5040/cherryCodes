// Online C++ compiler to run C++ program online
// Print reverse of an Array:
#include <iostream>
using namespace std;
void reverseAnArray(int arr[], int l, int r)
{
    if (l >= r)
        return;
    else
    {
        swap(arr[l], arr[r]);
        reverseAnArray(arr, l + 1, r - 1);
    }
}

int main()
{
    int arr[5] = {33, 43, 53, 63, 73};
    reverseAnArray(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}