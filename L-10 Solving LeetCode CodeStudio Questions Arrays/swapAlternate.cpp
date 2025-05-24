#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    int present=0;
    int next=1;

    while(next<size)
    {
        int temp=arr[present];
        arr[present]=arr[next];
        arr[next]=temp;
        present+=2;
        next+=2;
    }
    
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){


    int arrOdd[7]={1,2,3,4,5,6,7};
    int arrEven[6]={1,2,3,4,5,6};

    swapAlternate(arrOdd,7);
    swapAlternate(arrEven,6);

    printArray(arrOdd,7);
    printArray(arrEven,6);

    return 0;
}

// 2 1 4 3 6 5 7 
// 2 1 4 3 6 5 