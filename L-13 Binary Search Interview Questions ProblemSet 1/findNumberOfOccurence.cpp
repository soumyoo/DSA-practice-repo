#include<iostream>
using namespace std;

int occurence(int arr[],int size,int key){
    int start=0;
    int end=size-1;

    int first=0;
    int last=0;

    while (start<=end)
    {
        int mid=start+((end-start)/2);
        if(arr[mid]==key)
        {
            first=mid;
            end=mid-1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }    
    }

    start=0;
    end=size-1;

    while (start<=end)
    {
        int mid=start+((end-start)/2);
        if(arr[mid]==key)
        {
            last=mid;
            start=mid+1;
        }else if(arr[mid]>key){
            end=mid-1;
        }else if (arr[mid]<key)
        {
            start=mid+1;
        }    
    }

    return (last-first+1);
    
}

int main(){

    int arr[7]={1,2,2,2,3,4,5};

    cout<<occurence(arr,7,1)<<endl;//1
    cout<<occurence(arr,7,2)<<endl;//3
    cout<<occurence(arr,7,3)<<endl;//1
    cout<<occurence(arr,7,4)<<endl;//1
    cout<<occurence(arr,7,5)<<endl;//1
}