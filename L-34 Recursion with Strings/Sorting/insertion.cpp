#include<iostream>
using namespace std;

void insertionSort(int arr[],int size,int i){
    if(i==size) return;
    int temp=arr[i];
    int j=i-1;
    while (j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    return insertionSort(arr,size,i+1);
    
}

int main(){
    int arr[10]={2,9,1,4,5,3,10,8,7,6};
    int i=1;
    insertionSort(arr,10,i);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}