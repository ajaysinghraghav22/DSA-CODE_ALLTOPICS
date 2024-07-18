#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,4,2,5,8,5};
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    cout<<"value at 1st index : "<<*arr<<endl;
    cout<<"value at increase by 1 of  index1 : "<<*arr + 1<<endl;
    
    cout<<"value at 3rd index : "<<*(arr+1)<<endl;
    cout<<"value at 4th index : "<<*(arr+2)<<endl;
    cout<<"value at 5th index : "<<*(arr+3)<<endl;

}