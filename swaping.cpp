#include<iostream>
using namespace std;
void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"";
    }
    cout<<endl;
}

void swapalternate(int arr[],int size){
for(int i=0;i<size;i=i+2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}

}
int main()
{
int even[6]={1,2,8,4,5,6};
int odd[5]={11,21,13,41,15};
swapalternate(even,6);
printarr(even,6);
cout<<"Here for odd";
swapalternate(odd,5);
printarr(odd,5);

return 0;
}