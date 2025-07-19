#include<iostream>
using namespace std;

//tail
void printcount(int n){
    if (n==0) return;
        cout<<n<<endl;
        printcount(n-1);
}

//head
void print(int n){
    if (n==0) return;
        print(n-1);
        cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    printcount(n);
    print(n);
    return 0;
}

// 5
// 5
// 4
// 3
// 2
// 1
// 1
// 2
// 3
// 4
// 5