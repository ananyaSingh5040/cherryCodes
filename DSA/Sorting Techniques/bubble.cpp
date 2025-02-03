//In-place algorithm
//Time complexity = 0(n^2) for worst case 
// best case - O(n)
//Uses swaping adjacent element technique.
#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    bool swapped= false;
    for(int i=1;i<n;i++)
    {
        //Rounds starting from 1 and going till n-1
        for(int j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped= true;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    if(swapped==false)
    {
        return;
    }
}
int main()
{
    int arr[5]={50,40,30,20,10};
    bubbleSort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}