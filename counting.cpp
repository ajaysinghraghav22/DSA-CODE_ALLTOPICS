#include<iostream>
using namespace std;
int counting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;

}
int main(){
int n;
cout<<"Enter the Num for Counting : ";
cin>>n;

counting(n);

}