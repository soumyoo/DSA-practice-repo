#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int space=1;
        while (space<=(i-1))
        {
            cout<<" ";
            space++;
        }

        int num=1;
        while (num<=(n-i+1))
        {
            cout<<(i+num-1);
            num++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

// 5
// 12345
//  2345
//   345
//    45
//     5