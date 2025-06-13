#include<iostream>
using namespace std;

int main(){
    char *ptr= new char;
    *ptr='a';
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    delete ptr;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}