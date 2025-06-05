#include<iostream>
using namespace std;

void arrSum(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=arr[i]+sum;
    }

    cout<<"Sum of all elements of array is "<<sum<<endl;
}


int main(){
    int size;
    cout<<"Enter the array size: ";
    cin>>size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element at index "<<i<<": ";
        cin>>arr[i];
    }
    cout<<endl;

    arrSum(arr,size);

}