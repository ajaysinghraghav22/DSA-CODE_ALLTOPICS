#include<iostream>
using namespace std;
int main(){
char ch[6]={"hello"};
char chr[6]={'h','e','l','r'};

cout<<"For 1 st char array : "<<ch<<endl;
cout<<" 2nd array For 1 st char array : "<<chr[0]<<endl;
cout<<"For 1 st addres char array : "<<&chr[0]<<endl;
cout<<"For 2nd char array : "<<chr[1]<<endl;
cout<<"For 3rd char array : "<<chr[2]<<endl;
cout<<"For 4th char array : "<<chr[3]<<endl;
char *ptr=&chr[1];
cout<<"let see after getting pointer : "<<ptr<<endl;
cout<<"let see after getting pointer : "<<*ptr<<endl;
}
