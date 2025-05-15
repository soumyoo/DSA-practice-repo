#include<iostream>
using namespace std;

int main(){

    int a=1;
    int b=2;

    if (a-->0 || ++b>2)
    {
        cout<<"Condition was true";
    }
    else
    {
        cout<<"Condition was false";
    }
    
    cout<<endl<<a<<" "<<b<<endl;
    

    return 0;
}

// Condition was true
// 0 2