#include<iostream>
using namespace std;
int palindromString( char arr[],int n){
int s=0;
int e=n-1;
while(s<=e){
    if(arr[s]!=arr[e]){
        return 0;
    }
    else{
    s++;
    e--;
    }
}
return 1;
}
void reverse(char arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int getlength(char arr[]){
    int count=0;
    for(int i=0; i<arr[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char a[10];
    cout<<"Enter the name :";
    cin>>a;
    cout<<"your name is :"<<a<<endl;
    int ln=getlength(a);
    reverse( a,ln);
    cout<<"length is :"<<ln<<endl;
    cout<<"String after reverse :"<<a<<endl;
    int p=palindromString(a,ln);
    cout<<"Paalindrom y(1) / n(0) :"<<p<<endl;

}