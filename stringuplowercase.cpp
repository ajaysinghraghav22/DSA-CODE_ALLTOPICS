#include <iostream>
using namespace std;
char lowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        // return ch+32;  To convert uppercase to lowercase
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

int getlength(char arr[])
{
    int count = 0;
    for (int i = 0; i < arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int palindromString(char arr[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (lowercase(arr[s]) != lowercase(arr[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;  // The string is a palindrome
}
    int main()
    {
        char a[20];
        cout << "Enter a string: ";
        cin.getline(a, 20);
        int p=getlength(a);
        cout << "Length of the string: " << p << endl;

        cout << lowercase('t') << endl;
        cout << lowercase('A') << endl;
        cout<<palindromString(a,p);
    }