//greater and lower number
#include<iostream>
using namespace std;
int main(){
//     int a,b;
//     cout<<"Enter the Number";
//     cin>>a>>b;
//     if(a>b){
//         cout<<"A is greater than B"<<a<<endl;
//     }
//   if(b>a){
//     cout<<"B is greater than a"<<b<<endl;
//   }

  //cout<<"************CODE 2 FIND EVEN -VE AND ZERO FOR A NUM";
//   int num;
//   cout<<"Enter two Num\n";
//  cin>> num;
//   if(num>0){
//     cout<<"number is positive\n";

//   }
//   else{
//     if(num<0){
//         cout<<"number is negative\n";
//     }
//     else{
//         cout<<"Number is Zero\n";
//     }
//   }
// }

cout<<"--------------------WHILE LOOP-------------------";
int n;
cin>>n;
int i=1;
int sum=0;
while(i<=n)
{
    // cout<<i<<" ";
    // i++;         for counting
    if(i%2==0){
sum=sum+i;
    }
   i++; 
}
cout<<sum;
}
