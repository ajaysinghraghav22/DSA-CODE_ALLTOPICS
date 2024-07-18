#include<iostream>
using namespace std;
 char getmaxoccurString(string s){
string s[26]={0};
for(int i=0; i<s.length(); i++){
char c= s[i];
int num=0;
num=c - 'a';
}
int max=-1, ans=0;
 for(int i=0; i<26; i++){
    if(max<s[i]){
        max=s[i];
        ans=i;
    }
 }
 }
int main(){
string s;
cout<<"Enter the String :";
cin>>s;
cout<<"String is :"<<s<<endl;
cout<<getmaxoccurString(s);

}