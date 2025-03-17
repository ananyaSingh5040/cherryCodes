#include <bits/stdc++.h>
using namespace std;
//TC: O(N);
int largest(vector<int> &arr) {
    int max = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>max)
        {
            max= arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(90);
    arr.push_back(50);
    cout<<largest(arr);
    return 0;
}