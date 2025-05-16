#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=0;
    int result=0;
   
    while (n!=0)
    {
        int bit = n%10;
        result=(bit*pow(2,i))+result;
        n=n/10;
        i++;
    }
    
    cout<<result;

}

// 10010
// 18