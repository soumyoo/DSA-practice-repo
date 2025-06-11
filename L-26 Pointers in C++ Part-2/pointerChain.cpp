#include<iostream>
using namespace std;

int main(){
    int n=5;
    int *p1=&n;
    int *p2=p1;
    int *p3=p2;
    cout<<p3<<endl;//0x61fef8
    int *p4=p3;
    int *p5=p4;
    cout<<*p5<<endl;//5
    int **p6 = &p5;
    cout<<**p6<<endl;//5
    cout<<*p6<<endl;//0x61fef8
    cout<<p6<<endl;//0x61fef4 //address of p5

    return 0;
}