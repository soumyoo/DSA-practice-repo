#include<iostream>
using namespace std;


int factorial(int a){
    int fact=1;
    while (a!=0)
    {
        fact=fact*a;
        a--;
    }
    return fact;
}


int nCr(int n, int r){
    int nume=factorial(n);
    int deno=factorial(r)*factorial(n-r);
    return nume/deno;
}


int main(){
 int n;
 cin>>n;
 int r;
 cin>>r;
 cout<<nCr(n,r);
}