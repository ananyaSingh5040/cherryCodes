#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 5;
    int arr[n] = {1, 2, 1, 0,3};
    // PRE-COMPUTE (CREATING A MAP)
    map <int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // FETCH
        cout <<number<<" appeared "<< mpp[number]<<" times!"<<endl;
    }
    return 0;
}