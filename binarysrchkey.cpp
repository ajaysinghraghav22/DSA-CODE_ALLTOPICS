#include<iostream>
using namespace std;
 int binarySearch(int arr[],int s,int key,int e){
  
 
    if(s>e)
    return false;
       int mid=s+(e-s)/2;
    if(arr[mid]==key)
    return true;

    if(arr[mid]>key){
       return  binarySearch(arr, s, key,mid-1);
    }

     else{
       return  binarySearch(arr, mid+1, key,e);
    }


 }
int main(){
    int arr[5]={2,5,6,7,9};
    int n=5;
    int key=92;
    
   cout<<"present :"<<(binarySearch(arr,0,key,n-1));
}