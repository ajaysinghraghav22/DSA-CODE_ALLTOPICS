#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter array number";
cin>>n;
int arr[n];
cout<<"array elements without reverce";
for(int i=0;i<n;i++){
 cout<<endl;
 cout<<i;
}
cout<<endl;
cout<<"after reverce an array"<<endl;
for(int i=n-1;i>=0;i--){
    cout<<endl;
    cout<<i;
}

}