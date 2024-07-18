#include<iostream>
using namespace std;
int powerNo(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
    return a;
    }
    int ans=powerNo(a,b/2);
    if(b%2==0){
        return ans*ans;

    }
    else{
        return a*ans*ans;
    }
}
int main(){
    int a,b;
    cout<<" Enter the number And power of a number"<<endl;
    cin>>a>>b;
    cout<<a<<" ki power "<<b<<" is :"<<powerNo(a,b)<<endl;
    return 0;

}