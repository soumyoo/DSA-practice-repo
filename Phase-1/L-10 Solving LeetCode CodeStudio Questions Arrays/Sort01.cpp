#include<iostream>
using namespace std;

int sortOne(int arr[],int size){

    int left=0;
    int right=size-1;

    while (left<=right)
    {
        if (arr[left]==0)
        {
            left++;
        }else if (arr[right]==1)
        {
            right--;
        } else {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        
    }
    

}

int main(){

    int arr[10]={0,1,1,0,1,0,0,1,1,0};

    sortOne(arr,10);

    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

//0 0 0 0 0 1 1 1 1 1 