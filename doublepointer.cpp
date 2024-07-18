#include<iostream>
using namespace std;
void update(int **p){
    //p=p + 1;//esme koi change nhi hoga
     *p = *p + 1;
    //  **p = **p + 1;
}
int main(){
    int i=5;
    int *p=&i;
    int **p2=&p;
  /*  cout<<i<<endl; // Output: 5
    cout<<"adress : "<<p<<endl; // Output: 5 // Output: 5
    cout<<*p<<endl; // Output: 5
    cout<<"adress : "<<p2<<endl; // Output: 5
    cout<<**p2<<endl; // Output: 5
    cout<<endl;*/
     cout<<endl;
     cout<<endl;
    cout<<"Before update"<<endl;
    cout<<"value : "<<i<<endl;
     cout<<"adress: "<<p<<endl;
      cout<<"adress : "<<p2<<endl;

      update(p2);

      cout<<endl;
      cout<<endl;
      cout<<"After update"<<endl;
    cout<<"value : "<<i<<endl;
     cout<<"adress: "<<p<<endl;
      cout<<"adress : "<<p2<<endl;

    return 0;
}