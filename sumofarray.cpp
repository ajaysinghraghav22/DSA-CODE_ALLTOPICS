#include<iostream>
using namespace std;
int sum(int arr[],int n){
if(n<=0)
return 0;

return arr[0]+sum(arr+1,(n-1));
}

int main(){
int n;
cout<<"enter the size of array"<<endl;
cin>>n;
int *arr = new int[n];
cout<<"enter the elements of array"<<endl;
for(int i = 0; i < n; i++){
    cin>>arr[i];
}
for(int i = 0; i < n; i++){
    cout<<arr[i]<<"  ";

}
cout<<endl;
int total =sum(arr,n);
cout<<total<<endl;
 delete[] arr;
}