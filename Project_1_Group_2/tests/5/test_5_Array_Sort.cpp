#include <iostream>
using namespace std;

void swap(int v[], int k)
{
    int temp = v[k];
    v[k] = v[k + 1];
    v[k + 1] = temp;
}
void sort(int v[], int n)
{
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i - 1; j >= 0 && v[j] > v[j + 1]; j--)
        {
            swap(v, j);
        }
    }
}



int main()
{
    int arr[5] = { 20,12,6,55,120 };
    sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << "element no  " << i << " in the sorted array is : " << arr[i]<<endl;
    }
    return 0;
}