#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int size)
{
    //base case:
    if(size==0 || size==1)
    return true;

    if(arr[0]>arr[1])
    return false;
    else
    {
    bool remaining = isSorted(arr+1,size-1);
    return remaining;
    }
}
int main()
{
    int arr[5]={1,8,3,4,5};
    cout<<isSorted(arr,5);
    return 0;
}