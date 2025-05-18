#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num1;
    int num2;
    char op;

    cout<<"Enter the 1st number: "<<endl;
    cin>>num1;

    cout<<"Enter the 2nd number: "<<endl;
    cin>>num2;

    cout<<"Enter the operation: "<<endl;
    cin>>op;

    cout<<"Calculation: "<<num1<<op<<num2<<"=";

    switch(op){

        case '+': cout<<num1+num2<<endl;
        break;

        case '-': cout<<num1-num2<<endl;
        break;

        case '*': cout<<num1*num2<<endl;
        break;

        case '/': cout<<num1/num2<<endl;
        break;

        case '%': cout<<num1%num2<<endl;
        break;

        default: cout<<"Unrecognised operator"<<endl;
    }

}