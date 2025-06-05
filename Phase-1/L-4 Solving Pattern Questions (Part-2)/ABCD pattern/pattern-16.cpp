#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int i=1;
    char ch='A';
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        ch=ch-2;
        i++;
    }
    return 0;
}

// 4
// A B C D 
// C D E F 
// E F G H 
// G H I J