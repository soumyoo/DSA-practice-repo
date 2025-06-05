#include<iostream>
using namespace std;

bool isEven(int n){

    if (n&1)
    {
       return false;
    }else{
        return true;
    }
    
}

int main(){

    int num;
    cin>>num;

    if (isEven(num))
    {
        cout<<"Even";
    }
    else
    {
        cout<<"Odd";
    }

}