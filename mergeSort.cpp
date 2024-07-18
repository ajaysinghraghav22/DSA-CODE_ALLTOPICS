#include<iostream>
using namespace std;
void merge(int *arr , int s , int e){
    int mid= s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int index=s;
    for(int i=0; i<=len1;i++){
    first[i]=arr[index++];
    }
     for(int i=0; i<=len2;i++){
    second[i]=arr[index++];
    }


}

void mergeSort(int *arr,int s,int e){
    if(s>=e)
    return ;
    int mid= s+(e-s)/2;
    //first half
    mergeSort(arr,s,mid);
    //second half
    mergeSort(arr,mid+1,e); 

    merge(arr,s,e);


}

int main(){
int arr[10]={5,3,4,99,4,8,7,12,40,6};
int n=10;
mergeSort(arr,0, n.length()-1);
}