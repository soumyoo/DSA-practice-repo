#include<iostream>
using namespace std;

int setBits(int a, int b){

    int sum=0;

    while (a!=0)
    {
        int bit =a&1;
        a=a>>1;
        sum=sum+bit;
    }

    while (b!=0)
    {
        int bit =b&1;
        b=b>>1;
        sum=sum+bit;
    }

    return sum;
    
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<setBits(a,b);
}