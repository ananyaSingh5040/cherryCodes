#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 1, 0,3};
    int hash[10] = {0};
    for (int i = 0; i < n; i++)
    {
        // PRE-COMPUTE
        hash[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // FETCH
        cout <<number<<" appeared "<< hash[number]<<" times!"<<endl;
    }

    return 0;
}