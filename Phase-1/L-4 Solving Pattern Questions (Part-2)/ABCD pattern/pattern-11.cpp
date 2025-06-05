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
            j++;
        }
        cout<<endl;
        i++;
        ch++;
        
    }

    return 0;
}

// 4
// A A A A 
// B B B B 
// C C C C 
// D D D D 