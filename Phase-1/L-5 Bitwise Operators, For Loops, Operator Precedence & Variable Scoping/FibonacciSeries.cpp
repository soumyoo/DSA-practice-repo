#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int a=0;
    int b=1;
    cout<<"Fibonacci series:"<<endl;
    cout<<a<<" "<<b<<" ";

    for (int i = 1; i <= n; i++)
    {
        int term=a+b;
        a=b;
        b=term;
        cout<<term<<" ";

    }
    

    return 0;
}

// Enter the value of n: 7
// Fibonacci series:
// 0 1 1 2 3 5 8 13 21 