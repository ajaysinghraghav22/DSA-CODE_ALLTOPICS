#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;
}
int nCr(int n,int b){
 int num=fact(n);
 int den=fact(b)*fact(n-b);
 int ans=num/den;
 return ans ;

}
int main(){
    int n,b;
    cout<<"Enter a number 1st no :"<<endl;
    cin>>n;
    cout<<"Enter a number 2nd no :"<<endl;
    cin>>b;
   cout<<"Answer is :"<<nCr(n,b)<<endl;
    return 0;

}