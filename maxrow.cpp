#include <iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int maxRow(int arr[][3], int x, int y)
{
    cout << "printing the sum" << endl;
    int sum = 0;
    for (int i = 0; i < 2; i++)
    
    {
          int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << "  " << endl;
    }
    
}
int largeRow(int arr[][3], int z, int t)
{ int max=INT_MIN;
int rowIndex=0;
int sums=0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sums+=arr[i][j];
        }
        if(sums>max){
            max=sums;
            rowIndex=i;
        }
    }
    return rowIndex;
}
int main()
{
    int arr[2][3];
    cout << "Enter elements for the array: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    maxRow(arr, 2, 3);
    int ans=largeRow(arr, 2, 3);
    cout<<"Row with maximum sum is "<<ans<<endl;
    return 0;
}