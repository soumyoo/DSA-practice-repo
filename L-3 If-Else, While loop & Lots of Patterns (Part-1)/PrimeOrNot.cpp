#include<iostream>
using namespace std;
int main(){
    // if(std::cout<<"Hello World"){}

    int n;
    cin>>n;

    int i=2;

    while (i<n)
    {
        if (n%i==0)
        {
            cout<<"not a prime "<<i<<endl;
        }
        else if(n%i!=0){
            cout<<"is prime "<<i<<endl;
        }
        
        i++;
    }

}

// need some fixation
