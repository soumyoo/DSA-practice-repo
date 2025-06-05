#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
}

int main(){

    int n;
    cin>>n;

    dummy(n);

    cout<<"value of n is "<<n<<endl;


}


//15
// n is 16
// value of n is 15