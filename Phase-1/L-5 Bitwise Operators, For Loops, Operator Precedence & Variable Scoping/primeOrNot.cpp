#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;

     bool isPrime=1;

    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            isPrime=0;
            break;
        }

    }
    
     if (isPrime==0)
        {
            cout<<"Not a prime number"<<endl;
        }
        else{
            cout<<"Is a prime number"<<endl;
        }

    return 0;
}

// Enter the number: 
// 7
// Is a prime number

// Enter the number: 
// 15
// Not a prime number