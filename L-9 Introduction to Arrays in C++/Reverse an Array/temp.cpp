#include<iostream>
using namespace std;

void reverse(int arr[],int n){
    int start=0;
    int end=n-1;

    while (start<=end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }

}

void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


int main(){

    int arr[6]={4,5,6,7,8,9};
    int brr[7]={43,2,234,24,2,44,8};

    reverse(arr,6);
    reverse(brr,7);

    printArray(arr,6);
    printArray(brr,7);

}

// 9 8 7 6 5 4 
// 8 44 2 24 234 2 43 