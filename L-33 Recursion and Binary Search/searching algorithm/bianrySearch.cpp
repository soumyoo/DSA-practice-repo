#include<iostream>
using namespace std;

bool biSearch(int arr[],int size,int key){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    if (size==0)
    {
        return false;
    }  
    int mid=(size-1)/2;
    if (arr[mid]==key)
    {
        return true;
    }
    else if(arr[mid]>key){
        return biSearch(arr,mid,key);
    }else{
        return biSearch(arr+mid+1,size-mid-1,key);
    }
}

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    int key=1;

    if (biSearch(arr,size,key))
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }
    
    return 0;
}