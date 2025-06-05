#include<iostream>
using namespace std;

int main(){

    int arr[15]={4,7};

    for (int i = 0; i < 10; i++)
    {
        arr[i]=5;
    }
    

    for (int i = 0; i < 15; i++)
    {
        cout<<arr[i]<<" ";
    }

    

    
    return 0;
}