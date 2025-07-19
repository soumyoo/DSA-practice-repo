#include<iostream>
using namespace std;

void increasing(int& n){
    n++;
    if (n<10)
    {
        increasing(n);
    } 
}

int main(){
    int n=0;
    increasing(n);
    cout<<n<<endl;
    return 0;
}