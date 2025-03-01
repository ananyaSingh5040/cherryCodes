//Bubble sort
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 3;
    int arr[3] = {18, 16, 7};
    // BUBBLE SORT:
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j  + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    // Printing the array:
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}