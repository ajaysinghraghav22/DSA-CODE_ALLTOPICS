#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter array element";
    cin>>n;
    int arr[n];
    int count=0;
    int largest= arr[0];
    for(int i=0; i<n;i++){
        cin>>arr[i];
        if(arr[i]>largest){
            largest=arr[i];
            cout<<largest<<endl;
            count++;
        }   
    }
 return largest;
}