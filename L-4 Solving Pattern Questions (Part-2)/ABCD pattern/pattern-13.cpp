#include<iostream>
using namespace std;

int main(){


    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        char ch='A';
        int j=1;
        while (j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

// 5
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 