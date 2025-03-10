#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i =1;i<n;i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j]; //Move j by one place so that temp can be added.
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
   
}
int main()
{
    int arr[4]={4,12,11,20};
    int n = 4;
    insertionSort(arr,n);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    return 0;
}