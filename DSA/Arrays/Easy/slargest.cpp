#include <bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr) {
        
    int largest = arr[0];
    int slargest = -1;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]> largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(90);
    arr.push_back(50);
    cout<<getSecondLargest(arr);
    return 0;
}