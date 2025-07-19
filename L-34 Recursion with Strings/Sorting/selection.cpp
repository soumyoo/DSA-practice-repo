#include<iostream>
using namespace std;

void selectionSort(int arr[],int size,int i){
    if (size==0 || size==1) return;
    if(i==size) return selectionSort(arr+1,size-1,1);
    if(arr[0]>arr[i]) swap(arr[0],arr[i]);
    return selectionSort(arr,size,i+1);
}

int main(){
    int arr[10]={2,9,1,4,5,3,10,8,7,6};
    selectionSort(arr,10,1);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}