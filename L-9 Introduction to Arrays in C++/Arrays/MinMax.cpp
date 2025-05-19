#include<iostream>
#include <climits>
using namespace std;

int getMax(int num[],int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        } 
    }
    return max;
}

int getMin(int num[],int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        } 
    }
    return min;
}

int main(){

    //Bad practice:-
    // int size;
    // cin>>size;
    // int arr[size];
    // cout<<arr;
    
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;

    int arr[100]={};

    for (int i = 0; i < size; i++)
    {
       cout<<"Enter index "<<i<<" element "; 
       cin>>arr[i];
    }
    

    for (int j = 0; j < 100; j++)
    {
       cout<<arr[j]<<" ";
    }
    cout<<endl;

    cout<<"Max of array :"<<getMax(arr,size)<<endl;
    cout<<"Min of array :"<<getMin(arr,size)<<endl;

}


// Enter the size of the array: 5
// Enter index 0 element 34
// Enter index 1 element 54
// Enter index 2 element 2
// Enter index 3 element 5
// Enter index 4 element 4
// 34 54 2 5 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
// Max of array :54
// Min of array :2