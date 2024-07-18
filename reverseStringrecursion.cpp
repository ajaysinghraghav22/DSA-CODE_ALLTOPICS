#include<iostream>
using namespace std;
void reverseString(string &a,int s,int e){
    if(s>=e)
        return;
    swap(a[s],a[e]);
    s++;
    e--;
    reverseString(a,s,e);

}
int main(){
string a;

cout<<"Enter the String : "<<endl;
cin>>a;
reverseString(a,0,a.length()-1);
cout<<"reverse String is : "<<a<<endl;
}