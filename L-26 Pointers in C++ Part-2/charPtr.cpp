#include<iostream>
using namespace std;

int main(){

    char ch='w';

    cout<<"break0"<<endl;
    cout<<&ch<<endl;//until '\0' found, will continue printing


    char *p=&ch;
    cout<<"break1"<<endl;
    cout<<p<<endl; //until '\0' found, will continue printing


    cout<<"break2"<<endl;
    cout<<*p<<endl;//w
    cout<<ch<<endl;//w

    return 0;
}