#include<iostream>
using namespace std;

int main(){
    int n=5;

    int *p=&n;

    cout<<*p<<endl;//5

    cout<<p++<<endl;//0x61ff08 //add 4 byte to address
    cout<<*p<<endl;//6422284  //garbage value in new address

    cout<<p++<<endl;//0x61ff0c //add 4 byte to address
    cout<<*p<<endl;//4201184  //garbage value in new address

    cout<<p<<endl;//0x61ff10  //add 4 byte to address
    cout<<*p<<endl;//4201184  //garbage value in new address
}