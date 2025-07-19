#include<iostream>
using namespace std;

void bubbleSort(int arr[],int i,int size,bool noSwap){
    if(size==0 || (i==size && noSwap)) return;
    if(i==size){
        return bubbleSort(arr,0,size-1,true);
    }
    if(i>0 && arr[i-1]>arr[i]){
        swap(arr[i-1],arr[i]);
        noSwap=false;
    } 
    return bubbleSort(arr,i+1,size,noSwap);
}

int main(){
    int arr[10]={2,9,1,4,5,3,10,8,7,6};
    int i=0;
    bubbleSort(arr,i,10,true);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";//1 2 3 4 5 6 7 8 9 10
    }
    
    return 0;
}