#include <iostream>
using namespace std;
void twoOccurence(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";

            }
        }
    }
}
int main()
{
    return 0;
}