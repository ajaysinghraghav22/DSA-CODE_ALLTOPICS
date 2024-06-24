#include <iostream>
#include<limits.h>
using namespace std;
int maxElement(int arr[], int x)
{
    int max = INT_MIN;
   
        for (int i = 0; i <x; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
}
int MinElement(int arr[], int x)
{
    int mini = INT_MAX;
   
        for (int i = 0; i < x; i++)
        {
            mini=min(arr[i],mini);
            // if (arr[i] < min)
            // {
            //     min = arr[i];
            // }
        }
        return mini;
}

int main()
{
    int n;
    cout<<"Enter the Element : ";
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++){
      cin>>arr[i];
    }
    cout <<"Maximum value is :"<< maxElement(arr, n) << endl;
    cout << "Minimum value is :"<<MinElement(arr, n) << endl;
    return 0;
}