#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>i;
    i.push_back(1);
    i.push_back(5);
    i.push_back(13);
    i.push_back(12);
    cout<<"Binaary search --> " << binary_search(i.begin(),i.end(),13)<<endl;
       cout<<"Binaary search --> " << lower_bound(i.begin(),i.end(),13)<<endl;
    for(auto c: i){
        cout<<c<<" ";
    }
    cout<<endl;
    int a=4,b=6;
    cout<<max(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}