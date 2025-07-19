#include<iostream>
using namespace std;

int arrSum(int arr[],int size){
    if (size>0)
    {
        return arr[size-1]+arrSum(arr,size-1);
    }
    return 0;
}

int main(){
    int arr[5]={3,2,5,1,6};
    int size=5;
    cout<<arrSum(arr,size)<<endl;
    return 0;
}