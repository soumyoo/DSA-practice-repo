#include<iostream>
using namespace std;

int main(){


    int num=5;
    cout<<num<<endl;//5
    cout<<&num<<endl;//0x61ff0c //address of num
    int *ptr=&num;
    cout<<ptr<<endl;//0x61ff0c //address of num with pointer
    cout<<&ptr<<endl;//0x61ff08 //address of pointer OR address of address of num
    cout<<*ptr<<endl;//5
    cout<<++*ptr<<endl;//6
    cout<<num++<<endl;//6
    cout<<*ptr<<endl;//7

    int i=5;
    int* q=&i;
    cout<<q<<endl;//0x61fefc
    cout<<*q<<endl;//5
    int *p=0;
    cout<<p<<endl;//0

    // cout<<*p<<endl; //segmentation fail--> 0 address does not exist so data in 0 address also does not exist

    p=&i;// not *p=&i
    cout<<p<<endl;//0x61fefc
    cout<<*p<<endl;//5

    int *a=p;
    cout<<p<<" - "<<a<<endl;//0x61fef8 - 0x61fef8
    cout<<*p<<" - "<<*a<<endl;//5 - 5
}