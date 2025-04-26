#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=1;
        while (space<=(n-row))
        {
            cout<<" ";
            space++;
        }
        
        int num1=1;
        while (num1<=row)
        {
            cout<<num1;
            num1++;
        }
        
        int decrement=row-1;
        while (decrement)
        {
            cout<<decrement;
            decrement--;
        }

        cout<<endl;
        row++;
    }


    return 0;
}

// 5
//     1
//    121
//   12321
//  1234321
// 123454321