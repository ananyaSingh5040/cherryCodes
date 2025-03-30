#include <bits/stdc++.h>
using namespace std;
int sumDigits(int arr[],int size)
{
    //base case:
    if (size==0)
    return 0;
    if(size==1)
    return 1;

    //recursive relation
    int remaining = sumDigits(arr+1,size-1);
    int sum = arr[0] + remaining;
    return sum;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<sumDigits(arr,5);
    return 0;
}