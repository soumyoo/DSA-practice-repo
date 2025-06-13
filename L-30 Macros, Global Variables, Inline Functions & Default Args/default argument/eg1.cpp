#include<iostream>
using namespace std;

void printArr(int arr[],int n,int start=0){ // start default value is 0
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,3,7,4,9};
    printArr(arr,5,2);//7 4 9 
    printArr(arr,5);//1 3 7 4 9
    printArr(arr,5,0);//1 3 7 4 9
}