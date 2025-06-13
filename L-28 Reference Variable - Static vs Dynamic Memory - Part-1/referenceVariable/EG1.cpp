#include<iostream>
using namespace std;

void update(int &x){
    x++;
}

int main(){

    int i=5;
    int &j=i;
    cout<<i++<<" "<<j++<<" "<<i<<endl;//5 6 7

    int a=3;
    cout<<a<<endl;//3
    update(a);
    cout<<a<<endl;//4
}