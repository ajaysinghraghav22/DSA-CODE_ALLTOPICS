#include<iostream>
using namespace std;
int evenodd(int a){
    if(a%2==0){
        return 1;//Even
    }
    else{
        return 0;//odd
    }
}
int main(){
    int a;
    cout<<"Enter the number :  ";
    cin>>a;
    int ans=evenodd(a);
    cout<<ans<<endl;
}