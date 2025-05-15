#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;

    cout<<"Printing count from 0 to "<<n<<endl;

    for (int i = 0; i <=n; i++)
    {
        cout<<i<<endl;
    }
    

    return 0;
}

// enter the value of n:
// 9
// Printing count from 0 to 9
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9