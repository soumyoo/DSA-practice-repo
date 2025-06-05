#include<iostream>
using namespace std;

int gcd1(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    while (a!=b)
    {
        if (a>b) a=a-b;
        else b=b-a;
    }
    return a;
}

int gcd2(int a,int b){
    // while (b != 0) {
    //     int temp = b;
    //     b = a % b;
    //     a = temp;
    // }
    while (a!=0 && b!=0)
    {
        if (a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    if(b==0) return a;
    
    return a;
}

int main(){

    int a,b;
    cout<<"enter the value of a & b ";
    cin>>a>>b;

    int gcd_ab1=gcd1(a,b);
    int gcd_ab2=gcd2(a,b);

    cout<<gcd_ab1<<endl;
    cout<<gcd_ab2<<endl;

    if (gcd_ab1==gcd_ab2 && gcd_ab1 != 0)
    {
        int lcm=(a/gcd_ab1)*b;
        cout<<lcm<<endl;
    }
    
    return 0;

}