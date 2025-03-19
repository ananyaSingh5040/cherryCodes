#include <bits/stdc++.h>
using namespace std;
// TIME COMPLEXITY : O(N Log N);
// SPACE COMPLEXITY: O(N);
void merge(vector<int>& arr,int start, int mid, int end)
{
    //result store karne ke lie
    vector<int> ans;
    int left = start;
    int right = mid+1;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            ans.push_back(arr[left]);
            left++;
        }
        else
        {
            ans.push_back(arr[right]);
            right++;
        }
    }
    //checklist (agar 1st while ka koi ek condn false hota toh baaki ke bache elements add)
    while(left<=mid)
    {
        ans.push_back(arr[left]);
        left++;
    }
    while(right<=end)
    {
        ans.push_back(arr[right]);
        right++;
    }
   for(int i= start; i<=end;i++)
   {
    arr[i]= ans[i-start]; //idhar correct indexing ke liye kar rahe i-start as ans sub- sorted array store maar raha toh correct indexing ke liye!
   }


}
void mergeSort(vector<int>& arr, int start, int end)
{
    //base case
    if(start>=end) return; // inshort single element aagya toh return maardo.

    //mid nikalna
   int mid= start+ (end-start)/2;

    //left part sorting
    mergeSort(arr, start, mid);

    //right part sorting
    mergeSort(arr, mid+1,end);

    //merge
    merge(arr,start,mid,end);
}
int main()
{
    vector<int> arr;
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(44);
    arr.push_back(21);
    arr.push_back(1);
    arr.push_back(5);
    int n = arr.size();
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}