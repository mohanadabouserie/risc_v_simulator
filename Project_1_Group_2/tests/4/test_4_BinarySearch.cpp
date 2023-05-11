#include <iostream>
using namespace std; 

int BinarySearch(int SortedArray[], int value, int low, int high)
{
    if (high < low)
    {
        return -1;
    }
    int mid = (low + high) / 2;
    if (SortedArray[mid] > value)
    {
        return BinarySearch(SortedArray, value, low, mid - 1);
    }
    else if (SortedArray[mid] < value)
    {
        return BinarySearch(SortedArray, value, mid + 1, high);
    }
    else
    {
        return mid;
    }
}
int main()
{
    int arr[5] = { 0,2,4,5,10 };
    cout << BinarySearch(arr, 4, 0, 5);
}