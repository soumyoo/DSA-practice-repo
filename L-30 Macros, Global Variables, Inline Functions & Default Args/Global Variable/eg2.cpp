#include<iostream>
using namespace std;

int i=5;

void c(){
    i=11;
    cout<<i<<endl;//11
}

void b(){
    cout<<i++<<endl;//6
    int i=9;
    cout<<i<<endl;//9
    c();
}

void a(){
    cout<<i++<<endl;//5
    b();
}

int main(){
    cout<<i<<endl;//5
    a();
    return 0;
}