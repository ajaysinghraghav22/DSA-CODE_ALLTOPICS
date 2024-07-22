/*#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter how long array you want ";
cin>>n;
int arr[n];
cout<< "Enter elements "+n;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
cout<<"Array elements is " <<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" "<<endl;
}
return 0;
}*/
/*#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int n; // Current size of the array
    int pos; // Position where the element will be inserted
    int value; // Value to be inserted

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the position where you want to insert the element (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n) {
        cout << "Invalid position!";
        return 1;
    }

    cout << "Enter the value to be inserted: ";
    cin >> value;

    // Shift elements to the right to make space for the new element
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos] = value;

    n++; // Increase the size of the array

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}*/

#include <iostream>

using namespace std;
int Max_size=100;
int main(){
   int arr [Max_size];
   int n,pos,value;
cout<<"Enter how long array you want";
 cin>>n;
 cout<<"Enter the elements of an array ";
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 cout<<"Array elements before inserting is "<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" "<<endl;
 }
 cout<<"Enter the position where you want to insert the element (0 to "<<n<<")";
 cin>>pos;
 if(pos<0||pos>n){
    cout<<"INavalid";
    return 1;
 }
 cout<<"enter the value you want insert";
 cin>>value;
 for(int i=n;i>pos;i--){
 arr[i]=arr[i-1];
 }
 arr[pos]=value;
 n++;
 cout<<"Array elements after inserting is "<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" "<<endl;
 }
 return 0;
}
