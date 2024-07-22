#include<iostream>
using namespace std;
int linearsearch(int arr[] ,int n,int key){
for(int i=0;i<n;i++){
    if(arr[i] ==key){
        cout<<i<<endl;
       // return 1;
    }
}
return -1;
}

int main()
{
    int n;
     cout<<"enter a number of elements you wants in array :"<<endl; 
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<linearsearch(arr,n,key);

}