#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"Enter The Name :"<<endl;
    cin>>name;
    cout<<"your name is :"<<name<<endl;
    int len=getlength(name);
    cout<<len<<endl;
    reverse(name,len);
    cout<<"Reversed Name :"<<name<<endl;
    return 0;
}