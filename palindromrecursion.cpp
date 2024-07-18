#include<iostream>
using namespace std;
int ispalindrome(string a,int s,int e){
    if(s>=e)
        return 1;
    if(a[s]!=a[e])
        return 0;
    return ispalindrome(a,s+1,e-1);
}
int main(){
    string a;
    cout<<"Enter String For Checking Palindrome or Not : "<<endl;
    cin>>a;
    int ans=ispalindrome(a,0,a.length()-1);
    if(ans==1){
        cout<<a<<" is Palindrome."<<endl;
    }
    else{
        cout<<a<<" is Not Palindrome."<<endl;
    }

}