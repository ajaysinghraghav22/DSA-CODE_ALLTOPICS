#include<iostream>
using namespace std;
int size=100;
int main(){
    int arr[size];
int n ,pos;
cout<<"enter length of an array"<<endl;
 cin>>n;
 cout<<"enter the elements of an array"<<endl;
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }    
 cout<<"Array before deletion"<<endl;
 for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
 }
 cout<<"enter the postition you want to delete the array(0 to"<<n+")";
 cin>>pos;
 if(pos<0||pos>=n){
     cout<<"invalid postition"<<endl;
     return 1;
 }
 for(int i=pos;i<n-1;i++){
     arr[i]=arr[i+1];
 }
 n--;
 cout<<"Array after deletion"<<endl;
 for(int i=0;i<n;i++){
cout<<arr[i]<<endl;
 }
return 0 ;
}