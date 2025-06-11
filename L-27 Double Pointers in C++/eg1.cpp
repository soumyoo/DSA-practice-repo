#include<iostream>
using namespace std;

int main(){

    int a=10;
    int *p=&a;
    int **q=&p;

    cout<<endl;

    cout<<&a<<endl;//0x2cea9ffdbc
    cout<<p<<endl;//0x2cea9ffdbc
    cout<<*q<<endl;//0x2cea9ffdbc

    cout<<endl;

    cout<<&p<<endl;//0x2cea9ffdb0
    cout<<q<<endl;//0x2cea9ffdb0

    cout<<endl;

    cout<<*p<<endl;//10
    cout<<a<<endl;//10
    cout<<**q<<endl;//10

    cout<<endl;

    cout<<&q<<endl;//0x2cea9ffda8

    return 0;
}