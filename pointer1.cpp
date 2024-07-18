#include<iostream>
using namespace std;
int main(){
    int num=5;
    int* ptr = &num;
    int *p=0;
    int c=20;
    p=&c;
    cout<<" CAse 1 : "<<ptr<<endl;
      cout<<" CAse 2 : "<<*ptr<<endl;
      cout<<"Here is case 3 : "<<p<<endl;
      cout<<"Here is case 4 : "<<*p<<endl;

      cout<<" Another case"<<endl;
      int sum=23;
      cout<<" Sum before increment :"<<sum<<endl;
      int *pt=&sum;
       (*pt)++;
       cout<<"Sum after increment :"<<sum<<endl;

       cout<<"::::::: copying a poniter :::::::"<<endl;
       int *nw=pt;
       cout<<"adtress of old "<<pt<<" Adress of copy constructor "<<nw<<endl;
       cout<<"value of old   "<<*pt<<" value of copy constructor  "<<*nw<<endl;
       return 0;
}