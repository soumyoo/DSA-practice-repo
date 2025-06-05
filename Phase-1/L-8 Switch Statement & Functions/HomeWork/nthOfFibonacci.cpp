#include<iostream>
using namespace std;

int nthFibo(int n){
    if (n==1) return 0;
    if (n==2) return 1;

    int a=0;
    int b=1;
    int nth=0;
    for (int i = 3; i <=n; i++)
    {
        nth=a+b;
        a=b;
        b=nth;

    }
    return nth;
}

int main(){

    int n;
    cout<<"Enter the term"<<endl;
    cin>>n;

    cout<<nthFibo(n);
}