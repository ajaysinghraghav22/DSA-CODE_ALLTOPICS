#include <iostream>
#include <string>
using namespace std;
void sayDigit(string arg[], int n)
{
    // base case
    if (n == 0)
        return;
    // processing
    int digit = n % 10;
    n = n / 10;
    // recursive call
    sayDigit(arg, n);
    cout << arg[digit] << " " ;
}
int main()
{
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter a number :  " << endl;
    cin >> n;
    sayDigit(arr, n);
}