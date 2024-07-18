#include <iostream>
using namespace std;
int Insertionsort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1; 
        for (; j >= 0; j--)
        {

            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
           
        }
         arr[j + 1] = temp;
    }
}
    void print(int arr[], int n)
    {
        for (int  i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        
    }
    int main()
    {
        int arr[6]={11,33,5,3,7,4};
        Insertionsort(arr,6);
        print(arr,6);
    }