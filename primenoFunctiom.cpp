#include<iostream>
using namespace std;
int isPrime( int n ){
for(int i=2;i<=7;i++){
    if(n%i==0){
        return 0; //not prime
    }
    else{
        return 1; //prime
    }
}
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<isPrime(n);
    return 0;

}