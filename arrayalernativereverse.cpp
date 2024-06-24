#include<iostream>
using namespace std;
int swapAlernative(int arr[],int size){
for (int i = 0; i < size; i+=2)
{
    if(i+1<size){
        swap(arr[i],arr[i+1]);

    }
}

};
int printarray(int arr[],int size){
for(int i = 0; i < size; i++){
    cout<<arr[i]<<"  ";
}
cout<<endl;
}
int main(){
    int arr[8]={1,32,45,32,56,75,343,786};
    int arrs[5]={3,2,56,877,-1};
    swapAlernative(arr,8);
    swapAlernative(arrs,5);
    printarray(arr,8);
    printarray(arrs,5);
}