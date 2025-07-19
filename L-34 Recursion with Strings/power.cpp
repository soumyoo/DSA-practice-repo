
#include<iostream>
using namespace std;

long long power(long long x,int n,long long ans){
    if(n==0) return ans;
        
    if (n&1)
    {
        ans*=x;
    }
    return power(x*x,n>>1,ans);
}

int main(){
    long long x=2;
    int n=40;
    long long ans=1;
    cout<<power(x,n,ans)<<endl;//1099511627776
    return 0;
}