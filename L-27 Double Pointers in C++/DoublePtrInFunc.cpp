#include<iostream>
using namespace std;

void updateAddress1(int *p){
    p++;
}
void valueUpdate1(int *p){
    *p=*p+1;
}
void updateAddress2(int **q){
    q++;
}
void valueUpdate2(int **q){
    **q=**q+1;
}
void update(int **q){
    *q=*q+1;
}

int main(){
    int n=5;
    int *p=&n;
    int **q=&p;
    cout<<"before"<<endl;
    cout<<p<<endl;//0x7d18dff734
    cout<<q<<endl;//0x7d18dff728
    cout<<*p<<endl;//5
    cout<<**q<<endl;//5
    updateAddress1(p);
    updateAddress2(q);
    valueUpdate2(q);
    cout<<**q<<endl;//6
    valueUpdate1(p);
    cout<<"after"<<endl;
    cout<<p<<endl;//0x7d18dff734
    cout<<q<<endl;//0x7d18dff728
    cout<<*p<<endl;//7
    cout<<**q<<endl;//7
    update(q);
    cout<<p<<endl;//0x7d18dff738
    cout<<*p<<endl;//417330984
    cout<<**q<<endl;//417330984
    cout<<n<<endl;//7
}