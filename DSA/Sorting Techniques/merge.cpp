//divides array from middle.
//sorts the array by making elements individual and then placing them in their right position.
//Divide And Conquer.
//Recursion.
#include <iostream>
using namespace std;
void merge(int arr[],int s,int e)
{

}
void mergeSort(int arr[],int s,int e)
{
    //Base Case:
    if(s>=e)
    return;
    int mid= (s+e)/2;

    //Left part Sorting:
    merge(arr,s,mid);

    //Right part Sorting:
    merge(arr,mid+1,e);

}
int main()
{
    int arr[5]= {50,40,30,20,10};
    int n=5;
    mergeSort(arr,0,n-1);
    return 0;
}