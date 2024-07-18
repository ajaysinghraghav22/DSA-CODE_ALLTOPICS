#include<iostream>
#include<vector>
using namespace std;
vector<int>reverse(vector<int> k){
    int s=0; int e=k.size()-1;
    while(s<=e){
        swap(k[s],k[e]);
        s++;
        e--;
    }
    return k;
}
void print(vector <int >c){
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}
int main(){
vector<int> v;
v.push_back(12);
v.push_back(1);
v.push_back(-12);
v.push_back(2);
v.push_back(9);
v.push_back(7);
vector<int> r= reverse(v);
print(r);


}