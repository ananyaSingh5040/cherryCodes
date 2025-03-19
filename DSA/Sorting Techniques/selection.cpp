#include <bits/stdc++.h>
using namespace std;
int* selectionSort(int arr[], int n)
{
    int minimum=0;
    for(int i =0;i<n-1;i++)
    {
        minimum =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimum])
            {
                minimum =j;
            }
        }
        swap(arr[minimum],arr[i]);
    }
    return arr;
    
}
int main()
{
    int arr[6] = {13,46,24,52,20,9};
    int n =6;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}