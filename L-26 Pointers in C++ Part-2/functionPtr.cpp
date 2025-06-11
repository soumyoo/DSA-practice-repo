#include<iostream>
using namespace std;

void UpdatePtrAddress(int *p){
    p=p+1;
}

void UpdatePtrPointer(int *p){
    *p=*p+1;
}

int getArrSum(int arr[],int n){
    cout<<sizeof(arr)<<endl;//8 //since only pointer is passed
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       sum+=arr[i];
    }
    return sum;
}

int main(){
    int value =5;

    int *p=&value;
    cout<<"before"<<endl;
    cout<<p<<endl;//0xab61fffb2c
    cout<<*p<<endl;//5
    UpdatePtrAddress(p);
    UpdatePtrPointer(p);
    cout<<"after"<<endl;
    cout<<p<<endl;//0xab61fffb2c //no updation in ptr address
    cout<<*p<<endl;//6 // updation in ptr value

    int arr[5]={1,2,3,4,5};

    cout<<getArrSum(arr,5)<<endl;//15
    cout<<getArrSum(arr+3,2)<<endl;//9
    cout<<sizeof(arr)<<endl;//20
    int *t=&arr[0];
    cout<<sizeof(t)<<endl;//8
}