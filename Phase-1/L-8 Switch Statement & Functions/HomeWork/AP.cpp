#include<iostream>
using namespace std;


int AP(int n){
    n=(3*n)+7;
    return n;
}

int main(){

    int n;
    cout<<"Enter the term"<<endl;
    cin>>n;

    cout<<AP(n)<<endl;
}