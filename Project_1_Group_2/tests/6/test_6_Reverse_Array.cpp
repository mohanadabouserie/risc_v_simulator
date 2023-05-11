#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}


int main()
{
    int arr[5] = { 20,12,6,55,120 };
    reverseArray(arr, 0,4);

    for (int i = 0; i < 5; i++)
    {
        cout << "element no  " << i << " in the sorted array is : " << arr[i]<<endl;
    }
    return 0;
}