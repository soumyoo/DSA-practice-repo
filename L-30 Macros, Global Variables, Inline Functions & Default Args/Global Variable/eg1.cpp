#include<iostream>
using namespace std;

int main(){
    int i=5;
    {
        int i=9;
        cout<<i<<endl;//9
    }
    cout<<i<<endl;//5
    {
        i=7;
    }
    cout<<i<<endl;//7
    return 0;
}