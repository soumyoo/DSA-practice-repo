#include<iostream>
using namespace std;

inline int getMax(int& x,int& y){
    return (x>y)? x : y;
}

int main(){

    int a=1,b=2;
    int ans=0;
    ans=getMax(a,b);
    cout<<ans<<endl; //2
    
    return 0;
}