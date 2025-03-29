#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key)
{
    int mid = s + (e-s)/2;
    //base case:
    if(s>e)
    return false;

    if(arr[mid]==key)
    return true;
    //recursive relation
    if(arr[mid]<key)
    return binarySearch(arr, mid+1,e, key);
    else
    return binarySearch(arr,s,mid-1,key);
}
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<binarySearch(arr,0,4,18);
    return 0;
}