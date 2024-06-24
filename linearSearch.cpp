#include<iostream>
using namespace std;
bool Exist(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;

}
int main(){
     int arr[10]={0,12,23,34,45,56,96,-1,24,5};
     int key;
     cout<<"Enter the key to search"<<endl;
     cin>>key;
  bool found=Exist( arr ,10, key);

  if(found){
    cout<<"key found :"<<endl;

  }
  else{
    cout<<"key not found :"<<endl;
  }

}