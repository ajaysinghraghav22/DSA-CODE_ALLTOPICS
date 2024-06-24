#include<iostream>
using namespace std;

int printArray(int array[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0; i<size; i++){
        cout<<array[i]<<endl;
    }

}
int main(){
    int arr[14]={3,5};
    printArray(arr,14);
     int sizes= sizeof(arr)/sizeof(int);
     cout<<sizes<<endl;
   
    }


 // fill_n(array,15,1);   filling the array with 1 
    // for(int i=0; i<15; i++){
    //     cout<<array[i]<<endl;


    //Finding the size of the array
   