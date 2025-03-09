#include <iostream>
using namespace std;
void longestSubarray(int arr[], int k, int n)
{
    int sum=0;
    int i=0;
    int maxLen=0;
    for(int j=0;j<n;j++)
    {
          sum+= arr[j];

            while(sum>k)
            {
                sum -=arr[i];
                i++;
            }
            if(sum==k)
            {
                maxLen = max(maxLen, j-i+1);
            }
        
    }
    cout<<maxLen;
    
}

int main() {
    // int arr[9]= {1,2,3,1,1,1,1,3,3};
int arr[6]= {10, 5, 2, 7, 1, -10};
    int k=15;
    int n=6;
    longestSubarray(arr,k,n);

    return 0;
}