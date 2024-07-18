#include <iostream>
using namespace std;
int partion(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }
    // plcaing pivot right position
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);
    // left and right part
    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quickSort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int p = partion(arr, s, e);
    // left part sort
    quickSort(arr, s, p - 1); // becuase p is middle element of before p we use p - 1 ;
   
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[10] = {54, 4, 64, 23, 94, 43, 9, 0, 3, 34};
    int s = 10;
    quickSort(arr, 0, s - 1);
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    return 0;
}